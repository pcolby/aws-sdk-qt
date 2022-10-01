// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprotectiongroupresponse.h"
#include "deleteprotectiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteProtectionGroupResponse
 * \brief The DeleteProtectionGroupResponse class provides an interace for Shield DeleteProtectionGroup responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::deleteProtectionGroup
 */

/*!
 * Constructs a DeleteProtectionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProtectionGroupResponse::DeleteProtectionGroupResponse(
        const DeleteProtectionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DeleteProtectionGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteProtectionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProtectionGroupRequest * DeleteProtectionGroupResponse::request() const
{
    Q_D(const DeleteProtectionGroupResponse);
    return static_cast<const DeleteProtectionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DeleteProtectionGroup \a response.
 */
void DeleteProtectionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProtectionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DeleteProtectionGroupResponsePrivate
 * \brief The DeleteProtectionGroupResponsePrivate class provides private implementation for DeleteProtectionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteProtectionGroupResponsePrivate object with public implementation \a q.
 */
DeleteProtectionGroupResponsePrivate::DeleteProtectionGroupResponsePrivate(
    DeleteProtectionGroupResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DeleteProtectionGroup response element from \a xml.
 */
void DeleteProtectionGroupResponsePrivate::parseDeleteProtectionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProtectionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
