// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeclientidfromopenidconnectproviderresponse.h"
#include "removeclientidfromopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveClientIDFromOpenIDConnectProviderResponse
 * \brief The RemoveClientIDFromOpenIDConnectProviderResponse class provides an interace for Iam RemoveClientIDFromOpenIDConnectProvider responses.
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
 * \sa IamClient::removeClientIDFromOpenIDConnectProvider
 */

/*!
 * Constructs a RemoveClientIDFromOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveClientIDFromOpenIDConnectProviderResponse::RemoveClientIDFromOpenIDConnectProviderResponse(
        const RemoveClientIDFromOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new RemoveClientIDFromOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new RemoveClientIDFromOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveClientIDFromOpenIDConnectProviderRequest * RemoveClientIDFromOpenIDConnectProviderResponse::request() const
{
    Q_D(const RemoveClientIDFromOpenIDConnectProviderResponse);
    return static_cast<const RemoveClientIDFromOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam RemoveClientIDFromOpenIDConnectProvider \a response.
 */
void RemoveClientIDFromOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveClientIDFromOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::RemoveClientIDFromOpenIDConnectProviderResponsePrivate
 * \brief The RemoveClientIDFromOpenIDConnectProviderResponsePrivate class provides private implementation for RemoveClientIDFromOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveClientIDFromOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
RemoveClientIDFromOpenIDConnectProviderResponsePrivate::RemoveClientIDFromOpenIDConnectProviderResponsePrivate(
    RemoveClientIDFromOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam RemoveClientIDFromOpenIDConnectProvider response element from \a xml.
 */
void RemoveClientIDFromOpenIDConnectProviderResponsePrivate::parseRemoveClientIDFromOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveClientIDFromOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
