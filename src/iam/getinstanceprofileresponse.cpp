// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinstanceprofileresponse.h"
#include "getinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetInstanceProfileResponse
 * \brief The GetInstanceProfileResponse class provides an interace for Iam GetInstanceProfile responses.
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
 * \sa IamClient::getInstanceProfile
 */

/*!
 * Constructs a GetInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetInstanceProfileResponse::GetInstanceProfileResponse(
        const GetInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new GetInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInstanceProfileRequest * GetInstanceProfileResponse::request() const
{
    Q_D(const GetInstanceProfileResponse);
    return static_cast<const GetInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetInstanceProfile \a response.
 */
void GetInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetInstanceProfileResponsePrivate
 * \brief The GetInstanceProfileResponsePrivate class provides private implementation for GetInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetInstanceProfileResponsePrivate object with public implementation \a q.
 */
GetInstanceProfileResponsePrivate::GetInstanceProfileResponsePrivate(
    GetInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetInstanceProfile response element from \a xml.
 */
void GetInstanceProfileResponsePrivate::parseGetInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
