// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untaginstanceprofileresponse.h"
#include "untaginstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagInstanceProfileResponse
 * \brief The UntagInstanceProfileResponse class provides an interace for Iam UntagInstanceProfile responses.
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
 * \sa IamClient::untagInstanceProfile
 */

/*!
 * Constructs a UntagInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UntagInstanceProfileResponse::UntagInstanceProfileResponse(
        const UntagInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new UntagInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagInstanceProfileRequest * UntagInstanceProfileResponse::request() const
{
    Q_D(const UntagInstanceProfileResponse);
    return static_cast<const UntagInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UntagInstanceProfile \a response.
 */
void UntagInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UntagInstanceProfileResponsePrivate
 * \brief The UntagInstanceProfileResponsePrivate class provides private implementation for UntagInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagInstanceProfileResponsePrivate object with public implementation \a q.
 */
UntagInstanceProfileResponsePrivate::UntagInstanceProfileResponsePrivate(
    UntagInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UntagInstanceProfile response element from \a xml.
 */
void UntagInstanceProfileResponsePrivate::parseUntagInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
