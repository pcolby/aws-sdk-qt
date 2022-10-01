// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountauthorizationdetailsresponse.h"
#include "getaccountauthorizationdetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountAuthorizationDetailsResponse
 * \brief The GetAccountAuthorizationDetailsResponse class provides an interace for Iam GetAccountAuthorizationDetails responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::getAccountAuthorizationDetails
 */

/*!
 * Constructs a GetAccountAuthorizationDetailsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountAuthorizationDetailsResponse::GetAccountAuthorizationDetailsResponse(
        const GetAccountAuthorizationDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetAccountAuthorizationDetailsResponsePrivate(this), parent)
{
    setRequest(new GetAccountAuthorizationDetailsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountAuthorizationDetailsRequest * GetAccountAuthorizationDetailsResponse::request() const
{
    Q_D(const GetAccountAuthorizationDetailsResponse);
    return static_cast<const GetAccountAuthorizationDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetAccountAuthorizationDetails \a response.
 */
void GetAccountAuthorizationDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountAuthorizationDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetAccountAuthorizationDetailsResponsePrivate
 * \brief The GetAccountAuthorizationDetailsResponsePrivate class provides private implementation for GetAccountAuthorizationDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountAuthorizationDetailsResponsePrivate object with public implementation \a q.
 */
GetAccountAuthorizationDetailsResponsePrivate::GetAccountAuthorizationDetailsResponsePrivate(
    GetAccountAuthorizationDetailsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetAccountAuthorizationDetails response element from \a xml.
 */
void GetAccountAuthorizationDetailsResponsePrivate::parseGetAccountAuthorizationDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountAuthorizationDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
