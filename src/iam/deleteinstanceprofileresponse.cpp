// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstanceprofileresponse.h"
#include "deleteinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteInstanceProfileResponse
 * \brief The DeleteInstanceProfileResponse class provides an interace for Iam DeleteInstanceProfile responses.
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
 * \sa IamClient::deleteInstanceProfile
 */

/*!
 * Constructs a DeleteInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInstanceProfileResponse::DeleteInstanceProfileResponse(
        const DeleteInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInstanceProfileRequest * DeleteInstanceProfileResponse::request() const
{
    Q_D(const DeleteInstanceProfileResponse);
    return static_cast<const DeleteInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteInstanceProfile \a response.
 */
void DeleteInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteInstanceProfileResponsePrivate
 * \brief The DeleteInstanceProfileResponsePrivate class provides private implementation for DeleteInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteInstanceProfileResponsePrivate object with public implementation \a q.
 */
DeleteInstanceProfileResponsePrivate::DeleteInstanceProfileResponsePrivate(
    DeleteInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteInstanceProfile response element from \a xml.
 */
void DeleteInstanceProfileResponsePrivate::parseDeleteInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
