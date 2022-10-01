// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloginprofileresponse.h"
#include "deleteloginprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteLoginProfileResponse
 * \brief The DeleteLoginProfileResponse class provides an interace for Iam DeleteLoginProfile responses.
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
 * \sa IamClient::deleteLoginProfile
 */

/*!
 * Constructs a DeleteLoginProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLoginProfileResponse::DeleteLoginProfileResponse(
        const DeleteLoginProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteLoginProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteLoginProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLoginProfileRequest * DeleteLoginProfileResponse::request() const
{
    Q_D(const DeleteLoginProfileResponse);
    return static_cast<const DeleteLoginProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteLoginProfile \a response.
 */
void DeleteLoginProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLoginProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteLoginProfileResponsePrivate
 * \brief The DeleteLoginProfileResponsePrivate class provides private implementation for DeleteLoginProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteLoginProfileResponsePrivate object with public implementation \a q.
 */
DeleteLoginProfileResponsePrivate::DeleteLoginProfileResponsePrivate(
    DeleteLoginProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteLoginProfile response element from \a xml.
 */
void DeleteLoginProfileResponsePrivate::parseDeleteLoginProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoginProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
