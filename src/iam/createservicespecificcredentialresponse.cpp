// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createservicespecificcredentialresponse.h"
#include "createservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateServiceSpecificCredentialResponse
 * \brief The CreateServiceSpecificCredentialResponse class provides an interace for Iam CreateServiceSpecificCredential responses.
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
 * \sa IamClient::createServiceSpecificCredential
 */

/*!
 * Constructs a CreateServiceSpecificCredentialResponse object for \a reply to \a request, with parent \a parent.
 */
CreateServiceSpecificCredentialResponse::CreateServiceSpecificCredentialResponse(
        const CreateServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new CreateServiceSpecificCredentialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateServiceSpecificCredentialRequest * CreateServiceSpecificCredentialResponse::request() const
{
    Q_D(const CreateServiceSpecificCredentialResponse);
    return static_cast<const CreateServiceSpecificCredentialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateServiceSpecificCredential \a response.
 */
void CreateServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateServiceSpecificCredentialResponsePrivate
 * \brief The CreateServiceSpecificCredentialResponsePrivate class provides private implementation for CreateServiceSpecificCredentialResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateServiceSpecificCredentialResponsePrivate object with public implementation \a q.
 */
CreateServiceSpecificCredentialResponsePrivate::CreateServiceSpecificCredentialResponsePrivate(
    CreateServiceSpecificCredentialResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateServiceSpecificCredential response element from \a xml.
 */
void CreateServiceSpecificCredentialResponsePrivate::parseCreateServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceSpecificCredentialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
