// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprotectiongroupresponse.h"
#include "updateprotectiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateProtectionGroupResponse
 * \brief The UpdateProtectionGroupResponse class provides an interace for Shield UpdateProtectionGroup responses.
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
 * \sa ShieldClient::updateProtectionGroup
 */

/*!
 * Constructs a UpdateProtectionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProtectionGroupResponse::UpdateProtectionGroupResponse(
        const UpdateProtectionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new UpdateProtectionGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateProtectionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProtectionGroupRequest * UpdateProtectionGroupResponse::request() const
{
    Q_D(const UpdateProtectionGroupResponse);
    return static_cast<const UpdateProtectionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield UpdateProtectionGroup \a response.
 */
void UpdateProtectionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProtectionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::UpdateProtectionGroupResponsePrivate
 * \brief The UpdateProtectionGroupResponsePrivate class provides private implementation for UpdateProtectionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateProtectionGroupResponsePrivate object with public implementation \a q.
 */
UpdateProtectionGroupResponsePrivate::UpdateProtectionGroupResponsePrivate(
    UpdateProtectionGroupResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield UpdateProtectionGroup response element from \a xml.
 */
void UpdateProtectionGroupResponsePrivate::parseUpdateProtectionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProtectionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
