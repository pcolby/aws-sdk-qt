// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyversionresponse.h"
#include "deletepolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeletePolicyVersionResponse
 * \brief The DeletePolicyVersionResponse class provides an interace for Iam DeletePolicyVersion responses.
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
 * \sa IamClient::deletePolicyVersion
 */

/*!
 * Constructs a DeletePolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePolicyVersionResponse::DeletePolicyVersionResponse(
        const DeletePolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeletePolicyVersionResponsePrivate(this), parent)
{
    setRequest(new DeletePolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePolicyVersionRequest * DeletePolicyVersionResponse::request() const
{
    Q_D(const DeletePolicyVersionResponse);
    return static_cast<const DeletePolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeletePolicyVersion \a response.
 */
void DeletePolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeletePolicyVersionResponsePrivate
 * \brief The DeletePolicyVersionResponsePrivate class provides private implementation for DeletePolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeletePolicyVersionResponsePrivate object with public implementation \a q.
 */
DeletePolicyVersionResponsePrivate::DeletePolicyVersionResponsePrivate(
    DeletePolicyVersionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeletePolicyVersion response element from \a xml.
 */
void DeletePolicyVersionResponsePrivate::parseDeletePolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
