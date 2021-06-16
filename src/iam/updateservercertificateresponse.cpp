/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateservercertificateresponse.h"
#include "updateservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UpdateServerCertificateResponse
 * \brief The UpdateServerCertificateResponse class provides an interace for IAM UpdateServerCertificate responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::updateServerCertificate
 */

/*!
 * Constructs a UpdateServerCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServerCertificateResponse::UpdateServerCertificateResponse(
        const UpdateServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateServerCertificateResponsePrivate(this), parent)
{
    setRequest(new UpdateServerCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServerCertificateRequest * UpdateServerCertificateResponse::request() const
{
    Q_D(const UpdateServerCertificateResponse);
    return static_cast<const UpdateServerCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM UpdateServerCertificate \a response.
 */
void UpdateServerCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::UpdateServerCertificateResponsePrivate
 * \brief The UpdateServerCertificateResponsePrivate class provides private implementation for UpdateServerCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UpdateServerCertificateResponsePrivate object with public implementation \a q.
 */
UpdateServerCertificateResponsePrivate::UpdateServerCertificateResponsePrivate(
    UpdateServerCertificateResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM UpdateServerCertificate response element from \a xml.
 */
void UpdateServerCertificateResponsePrivate::parseUpdateServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServerCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
