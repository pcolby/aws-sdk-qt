// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesskeyresponse.h"
#include "createaccesskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateAccessKeyResponse
 * \brief The CreateAccessKeyResponse class provides an interace for Iam CreateAccessKey responses.
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
 * \sa IamClient::createAccessKey
 */

/*!
 * Constructs a CreateAccessKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccessKeyResponse::CreateAccessKeyResponse(
        const CreateAccessKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateAccessKeyResponsePrivate(this), parent)
{
    setRequest(new CreateAccessKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccessKeyRequest * CreateAccessKeyResponse::request() const
{
    Q_D(const CreateAccessKeyResponse);
    return static_cast<const CreateAccessKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateAccessKey \a response.
 */
void CreateAccessKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccessKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateAccessKeyResponsePrivate
 * \brief The CreateAccessKeyResponsePrivate class provides private implementation for CreateAccessKeyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateAccessKeyResponsePrivate object with public implementation \a q.
 */
CreateAccessKeyResponsePrivate::CreateAccessKeyResponsePrivate(
    CreateAccessKeyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateAccessKey response element from \a xml.
 */
void CreateAccessKeyResponsePrivate::parseCreateAccessKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccessKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
