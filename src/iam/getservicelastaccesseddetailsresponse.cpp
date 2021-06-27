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

#include "getservicelastaccesseddetailsresponse.h"
#include "getservicelastaccesseddetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetServiceLastAccessedDetailsResponse
 * \brief The GetServiceLastAccessedDetailsResponse class provides an interace for IAM GetServiceLastAccessedDetails responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::getServiceLastAccessedDetails
 */

/*!
 * Constructs a GetServiceLastAccessedDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceLastAccessedDetailsResponse::GetServiceLastAccessedDetailsResponse(
        const GetServiceLastAccessedDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetServiceLastAccessedDetailsResponsePrivate(this), parent)
{
    setRequest(new GetServiceLastAccessedDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceLastAccessedDetailsRequest * GetServiceLastAccessedDetailsResponse::request() const
{
    return static_cast<const GetServiceLastAccessedDetailsRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM GetServiceLastAccessedDetails \a response.
 */
void GetServiceLastAccessedDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceLastAccessedDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::GetServiceLastAccessedDetailsResponsePrivate
 * \brief The GetServiceLastAccessedDetailsResponsePrivate class provides private implementation for GetServiceLastAccessedDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a GetServiceLastAccessedDetailsResponsePrivate object with public implementation \a q.
 */
GetServiceLastAccessedDetailsResponsePrivate::GetServiceLastAccessedDetailsResponsePrivate(
    GetServiceLastAccessedDetailsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM GetServiceLastAccessedDetails response element from \a xml.
 */
void GetServiceLastAccessedDetailsResponsePrivate::parseGetServiceLastAccessedDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceLastAccessedDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
