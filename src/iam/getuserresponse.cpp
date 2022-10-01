// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getuserresponse.h"
#include "getuserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetUserResponse
 * \brief The GetUserResponse class provides an interace for Iam GetUser responses.
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
 * \sa IamClient::getUser
 */

/*!
 * Constructs a GetUserResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserResponse::GetUserResponse(
        const GetUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetUserResponsePrivate(this), parent)
{
    setRequest(new GetUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserRequest * GetUserResponse::request() const
{
    Q_D(const GetUserResponse);
    return static_cast<const GetUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetUser \a response.
 */
void GetUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetUserResponsePrivate
 * \brief The GetUserResponsePrivate class provides private implementation for GetUserResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetUserResponsePrivate object with public implementation \a q.
 */
GetUserResponsePrivate::GetUserResponsePrivate(
    GetUserResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetUser response element from \a xml.
 */
void GetUserResponsePrivate::parseGetUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
