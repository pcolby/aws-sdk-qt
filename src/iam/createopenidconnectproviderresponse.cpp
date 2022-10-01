// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createopenidconnectproviderresponse.h"
#include "createopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateOpenIDConnectProviderResponse
 * \brief The CreateOpenIDConnectProviderResponse class provides an interace for Iam CreateOpenIDConnectProvider responses.
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
 * \sa IamClient::createOpenIDConnectProvider
 */

/*!
 * Constructs a CreateOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateOpenIDConnectProviderResponse::CreateOpenIDConnectProviderResponse(
        const CreateOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new CreateOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateOpenIDConnectProviderRequest * CreateOpenIDConnectProviderResponse::request() const
{
    Q_D(const CreateOpenIDConnectProviderResponse);
    return static_cast<const CreateOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateOpenIDConnectProvider \a response.
 */
void CreateOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateOpenIDConnectProviderResponsePrivate
 * \brief The CreateOpenIDConnectProviderResponsePrivate class provides private implementation for CreateOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
CreateOpenIDConnectProviderResponsePrivate::CreateOpenIDConnectProviderResponsePrivate(
    CreateOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateOpenIDConnectProvider response element from \a xml.
 */
void CreateOpenIDConnectProviderResponsePrivate::parseCreateOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
