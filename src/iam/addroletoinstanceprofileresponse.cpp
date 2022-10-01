// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addroletoinstanceprofileresponse.h"
#include "addroletoinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AddRoleToInstanceProfileResponse
 * \brief The AddRoleToInstanceProfileResponse class provides an interace for Iam AddRoleToInstanceProfile responses.
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
 * \sa IamClient::addRoleToInstanceProfile
 */

/*!
 * Constructs a AddRoleToInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
AddRoleToInstanceProfileResponse::AddRoleToInstanceProfileResponse(
        const AddRoleToInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AddRoleToInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new AddRoleToInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddRoleToInstanceProfileRequest * AddRoleToInstanceProfileResponse::request() const
{
    Q_D(const AddRoleToInstanceProfileResponse);
    return static_cast<const AddRoleToInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AddRoleToInstanceProfile \a response.
 */
void AddRoleToInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddRoleToInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AddRoleToInstanceProfileResponsePrivate
 * \brief The AddRoleToInstanceProfileResponsePrivate class provides private implementation for AddRoleToInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AddRoleToInstanceProfileResponsePrivate object with public implementation \a q.
 */
AddRoleToInstanceProfileResponsePrivate::AddRoleToInstanceProfileResponsePrivate(
    AddRoleToInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AddRoleToInstanceProfile response element from \a xml.
 */
void AddRoleToInstanceProfileResponsePrivate::parseAddRoleToInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddRoleToInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
