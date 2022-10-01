// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagopenidconnectproviderresponse.h"
#include "untagopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagOpenIDConnectProviderResponse
 * \brief The UntagOpenIDConnectProviderResponse class provides an interace for Iam UntagOpenIDConnectProvider responses.
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
 * \sa IamClient::untagOpenIDConnectProvider
 */

/*!
 * Constructs a UntagOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UntagOpenIDConnectProviderResponse::UntagOpenIDConnectProviderResponse(
        const UntagOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new UntagOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagOpenIDConnectProviderRequest * UntagOpenIDConnectProviderResponse::request() const
{
    Q_D(const UntagOpenIDConnectProviderResponse);
    return static_cast<const UntagOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UntagOpenIDConnectProvider \a response.
 */
void UntagOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UntagOpenIDConnectProviderResponsePrivate
 * \brief The UntagOpenIDConnectProviderResponsePrivate class provides private implementation for UntagOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
UntagOpenIDConnectProviderResponsePrivate::UntagOpenIDConnectProviderResponsePrivate(
    UntagOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UntagOpenIDConnectProvider response element from \a xml.
 */
void UntagOpenIDConnectProviderResponsePrivate::parseUntagOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
