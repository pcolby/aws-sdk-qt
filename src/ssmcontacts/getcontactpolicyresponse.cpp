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

#include "getcontactpolicyresponse.h"
#include "getcontactpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::GetContactPolicyResponse
 * \brief The GetContactPolicyResponse class provides an interace for SSMContacts GetContactPolicy responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::getContactPolicy
 */

/*!
 * Constructs a GetContactPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactPolicyResponse::GetContactPolicyResponse(
        const GetContactPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new GetContactPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContactPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactPolicyRequest * GetContactPolicyResponse::request() const
{
    return static_cast<const GetContactPolicyRequest *>(SSMContactsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SSMContacts GetContactPolicy \a response.
 */
void GetContactPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::GetContactPolicyResponsePrivate
 * \brief The GetContactPolicyResponsePrivate class provides private implementation for GetContactPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a GetContactPolicyResponsePrivate object with public implementation \a q.
 */
GetContactPolicyResponsePrivate::GetContactPolicyResponsePrivate(
    GetContactPolicyResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts GetContactPolicy response element from \a xml.
 */
void GetContactPolicyResponsePrivate::parseGetContactPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
