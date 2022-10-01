// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsamlproviderresponse.h"
#include "createsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateSAMLProviderResponse
 * \brief The CreateSAMLProviderResponse class provides an interace for Iam CreateSAMLProvider responses.
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
 * \sa IamClient::createSAMLProvider
 */

/*!
 * Constructs a CreateSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSAMLProviderResponse::CreateSAMLProviderResponse(
        const CreateSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new CreateSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSAMLProviderRequest * CreateSAMLProviderResponse::request() const
{
    Q_D(const CreateSAMLProviderResponse);
    return static_cast<const CreateSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateSAMLProvider \a response.
 */
void CreateSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateSAMLProviderResponsePrivate
 * \brief The CreateSAMLProviderResponsePrivate class provides private implementation for CreateSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateSAMLProviderResponsePrivate object with public implementation \a q.
 */
CreateSAMLProviderResponsePrivate::CreateSAMLProviderResponsePrivate(
    CreateSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateSAMLProvider response element from \a xml.
 */
void CreateSAMLProviderResponsePrivate::parseCreateSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
