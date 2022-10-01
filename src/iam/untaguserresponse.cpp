// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untaguserresponse.h"
#include "untaguserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagUserResponse
 * \brief The UntagUserResponse class provides an interace for Iam UntagUser responses.
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
 * \sa IamClient::untagUser
 */

/*!
 * Constructs a UntagUserResponse object for \a reply to \a request, with parent \a parent.
 */
UntagUserResponse::UntagUserResponse(
        const UntagUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagUserResponsePrivate(this), parent)
{
    setRequest(new UntagUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagUserRequest * UntagUserResponse::request() const
{
    Q_D(const UntagUserResponse);
    return static_cast<const UntagUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UntagUser \a response.
 */
void UntagUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UntagUserResponsePrivate
 * \brief The UntagUserResponsePrivate class provides private implementation for UntagUserResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagUserResponsePrivate object with public implementation \a q.
 */
UntagUserResponsePrivate::UntagUserResponsePrivate(
    UntagUserResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UntagUser response element from \a xml.
 */
void UntagUserResponsePrivate::parseUntagUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
