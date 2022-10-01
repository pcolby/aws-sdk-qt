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

#include "getopenidconnectproviderresponse.h"
#include "getopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetOpenIDConnectProviderResponse
 * \brief The GetOpenIDConnectProviderResponse class provides an interace for Iam GetOpenIDConnectProvider responses.
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
 * \sa IamClient::getOpenIDConnectProvider
 */

/*!
 * Constructs a GetOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
GetOpenIDConnectProviderResponse::GetOpenIDConnectProviderResponse(
        const GetOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new GetOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOpenIDConnectProviderRequest * GetOpenIDConnectProviderResponse::request() const
{
    Q_D(const GetOpenIDConnectProviderResponse);
    return static_cast<const GetOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetOpenIDConnectProvider \a response.
 */
void GetOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetOpenIDConnectProviderResponsePrivate
 * \brief The GetOpenIDConnectProviderResponsePrivate class provides private implementation for GetOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
GetOpenIDConnectProviderResponsePrivate::GetOpenIDConnectProviderResponsePrivate(
    GetOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetOpenIDConnectProvider response element from \a xml.
 */
void GetOpenIDConnectProviderResponsePrivate::parseGetOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
