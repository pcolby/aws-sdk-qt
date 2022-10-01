// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setdefaultpolicyversionresponse.h"
#include "setdefaultpolicyversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SetDefaultPolicyVersionResponse
 * \brief The SetDefaultPolicyVersionResponse class provides an interace for Iam SetDefaultPolicyVersion responses.
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
 * \sa IamClient::setDefaultPolicyVersion
 */

/*!
 * Constructs a SetDefaultPolicyVersionResponse object for \a reply to \a request, with parent \a parent.
 */
SetDefaultPolicyVersionResponse::SetDefaultPolicyVersionResponse(
        const SetDefaultPolicyVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new SetDefaultPolicyVersionResponsePrivate(this), parent)
{
    setRequest(new SetDefaultPolicyVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetDefaultPolicyVersionRequest * SetDefaultPolicyVersionResponse::request() const
{
    Q_D(const SetDefaultPolicyVersionResponse);
    return static_cast<const SetDefaultPolicyVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam SetDefaultPolicyVersion \a response.
 */
void SetDefaultPolicyVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetDefaultPolicyVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::SetDefaultPolicyVersionResponsePrivate
 * \brief The SetDefaultPolicyVersionResponsePrivate class provides private implementation for SetDefaultPolicyVersionResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SetDefaultPolicyVersionResponsePrivate object with public implementation \a q.
 */
SetDefaultPolicyVersionResponsePrivate::SetDefaultPolicyVersionResponsePrivate(
    SetDefaultPolicyVersionResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam SetDefaultPolicyVersion response element from \a xml.
 */
void SetDefaultPolicyVersionResponsePrivate::parseSetDefaultPolicyVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetDefaultPolicyVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
