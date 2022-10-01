// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteopenidconnectproviderresponse.h"
#include "deleteopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteOpenIDConnectProviderResponse
 * \brief The DeleteOpenIDConnectProviderResponse class provides an interace for Iam DeleteOpenIDConnectProvider responses.
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
 * \sa IamClient::deleteOpenIDConnectProvider
 */

/*!
 * Constructs a DeleteOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteOpenIDConnectProviderResponse::DeleteOpenIDConnectProviderResponse(
        const DeleteOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteOpenIDConnectProviderRequest * DeleteOpenIDConnectProviderResponse::request() const
{
    Q_D(const DeleteOpenIDConnectProviderResponse);
    return static_cast<const DeleteOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteOpenIDConnectProvider \a response.
 */
void DeleteOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteOpenIDConnectProviderResponsePrivate
 * \brief The DeleteOpenIDConnectProviderResponsePrivate class provides private implementation for DeleteOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
DeleteOpenIDConnectProviderResponsePrivate::DeleteOpenIDConnectProviderResponsePrivate(
    DeleteOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteOpenIDConnectProvider response element from \a xml.
 */
void DeleteOpenIDConnectProviderResponsePrivate::parseDeleteOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
