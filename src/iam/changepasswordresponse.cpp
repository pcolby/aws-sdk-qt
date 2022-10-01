// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "changepasswordresponse.h"
#include "changepasswordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ChangePasswordResponse
 * \brief The ChangePasswordResponse class provides an interace for Iam ChangePassword responses.
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
 * \sa IamClient::changePassword
 */

/*!
 * Constructs a ChangePasswordResponse object for \a reply to \a request, with parent \a parent.
 */
ChangePasswordResponse::ChangePasswordResponse(
        const ChangePasswordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ChangePasswordResponsePrivate(this), parent)
{
    setRequest(new ChangePasswordRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ChangePasswordRequest * ChangePasswordResponse::request() const
{
    Q_D(const ChangePasswordResponse);
    return static_cast<const ChangePasswordRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ChangePassword \a response.
 */
void ChangePasswordResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ChangePasswordResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ChangePasswordResponsePrivate
 * \brief The ChangePasswordResponsePrivate class provides private implementation for ChangePasswordResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ChangePasswordResponsePrivate object with public implementation \a q.
 */
ChangePasswordResponsePrivate::ChangePasswordResponsePrivate(
    ChangePasswordResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ChangePassword response element from \a xml.
 */
void ChangePasswordResponsePrivate::parseChangePasswordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ChangePasswordResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
