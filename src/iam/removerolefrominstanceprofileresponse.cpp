// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removerolefrominstanceprofileresponse.h"
#include "removerolefrominstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveRoleFromInstanceProfileResponse
 * \brief The RemoveRoleFromInstanceProfileResponse class provides an interace for Iam RemoveRoleFromInstanceProfile responses.
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
 * \sa IamClient::removeRoleFromInstanceProfile
 */

/*!
 * Constructs a RemoveRoleFromInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveRoleFromInstanceProfileResponse::RemoveRoleFromInstanceProfileResponse(
        const RemoveRoleFromInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new RemoveRoleFromInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new RemoveRoleFromInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveRoleFromInstanceProfileRequest * RemoveRoleFromInstanceProfileResponse::request() const
{
    Q_D(const RemoveRoleFromInstanceProfileResponse);
    return static_cast<const RemoveRoleFromInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam RemoveRoleFromInstanceProfile \a response.
 */
void RemoveRoleFromInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveRoleFromInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::RemoveRoleFromInstanceProfileResponsePrivate
 * \brief The RemoveRoleFromInstanceProfileResponsePrivate class provides private implementation for RemoveRoleFromInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveRoleFromInstanceProfileResponsePrivate object with public implementation \a q.
 */
RemoveRoleFromInstanceProfileResponsePrivate::RemoveRoleFromInstanceProfileResponsePrivate(
    RemoveRoleFromInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam RemoveRoleFromInstanceProfile response element from \a xml.
 */
void RemoveRoleFromInstanceProfileResponsePrivate::parseRemoveRoleFromInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveRoleFromInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
