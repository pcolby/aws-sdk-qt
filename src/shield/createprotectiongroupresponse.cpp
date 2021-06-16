/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
