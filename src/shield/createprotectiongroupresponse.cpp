// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprotectiongroupresponse.h"
#include "createprotectiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateProtectionGroupResponse
 * \brief The CreateProtectionGroupResponse class provides an interace for Shield CreateProtectionGroup responses.
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
 * \sa ShieldClient::createProtectionGroup
 */

/*!
 * Constructs a CreateProtectionGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProtectionGroupResponse::CreateProtectionGroupResponse(
        const CreateProtectionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new CreateProtectionGroupResponsePrivate(this), parent)
{
    setRequest(new CreateProtectionGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProtectionGroupRequest * CreateProtectionGroupResponse::request() const
{
    Q_D(const CreateProtectionGroupResponse);
    return static_cast<const CreateProtectionGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield CreateProtectionGroup \a response.
 */
void CreateProtectionGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProtectionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::CreateProtectionGroupResponsePrivate
 * \brief The CreateProtectionGroupResponsePrivate class provides private implementation for CreateProtectionGroupResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateProtectionGroupResponsePrivate object with public implementation \a q.
 */
CreateProtectionGroupResponsePrivate::CreateProtectionGroupResponsePrivate(
    CreateProtectionGroupResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield CreateProtectionGroup response element from \a xml.
 */
void CreateProtectionGroupResponsePrivate::parseCreateProtectionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProtectionGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
