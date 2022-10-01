// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicelastaccesseddetailsresponse.h"
#include "getservicelastaccesseddetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsResponse
 * \brief The GetServiceLastAccessedDetailsResponse class provides an interace for Iam GetServiceLastAccessedDetails responses.
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
    Q_D(const GetServiceLastAccessedDetailsResponse);
    return static_cast<const GetServiceLastAccessedDetailsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetServiceLastAccessedDetails \a response.
 */
void GetServiceLastAccessedDetailsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceLastAccessedDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetServiceLastAccessedDetailsResponsePrivate
 * \brief The GetServiceLastAccessedDetailsResponsePrivate class provides private implementation for GetServiceLastAccessedDetailsResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetServiceLastAccessedDetailsResponsePrivate object with public implementation \a q.
 */
GetServiceLastAccessedDetailsResponsePrivate::GetServiceLastAccessedDetailsResponsePrivate(
    GetServiceLastAccessedDetailsResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetServiceLastAccessedDetails response element from \a xml.
 */
void GetServiceLastAccessedDetailsResponsePrivate::parseGetServiceLastAccessedDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceLastAccessedDetailsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
