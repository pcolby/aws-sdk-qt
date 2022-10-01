// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpolicyversionresponse.h"
#include "createpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreatePolicyVersionResponse
 * \brief The CreatePolicyVersionResponse class provides an interace for Iam CreatePolicyVersion responses.
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
 * \sa IamClient::createPolicyVersion
 */

/*!
 * Constructs a CreatePolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePolicyVersionResponse::CreatePolicyVersionResponse(
        const CreatePolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreatePolicyVersionResponsePrivate(this), parent)
{
    setRequest(new CreatePolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePolicyVersionRequest * CreatePolicyVersionResponse::request() const
{
    Q_D(const CreatePolicyVersionResponse);
    return static_cast<const CreatePolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreatePolicyVersion \a response.
 */
void CreatePolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreatePolicyVersionResponsePrivate
 * \brief The CreatePolicyVersionResponsePrivate class provides private implementation for CreatePolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreatePolicyVersionResponsePrivate object with public implementation \a q.
 */
CreatePolicyVersionResponsePrivate::CreatePolicyVersionResponsePrivate(
    CreatePolicyVersionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreatePolicyVersion response element from \a xml.
 */
void CreatePolicyVersionResponsePrivate::parseCreatePolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
