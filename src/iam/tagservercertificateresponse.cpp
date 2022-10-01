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

#include "tagservercertificateresponse.h"
#include "tagservercertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagServerCertificateResponse
 * \brief The TagServerCertificateResponse class provides an interace for Iam TagServerCertificate responses.
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
 * \sa IamClient::tagServerCertificate
 */

/*!
 * Constructs a TagServerCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
TagServerCertificateResponse::TagServerCertificateResponse(
        const TagServerCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagServerCertificateResponsePrivate(this), parent)
{
    setRequest(new TagServerCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagServerCertificateRequest * TagServerCertificateResponse::request() const
{
    Q_D(const TagServerCertificateResponse);
    return static_cast<const TagServerCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagServerCertificate \a response.
 */
void TagServerCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagServerCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagServerCertificateResponsePrivate
 * \brief The TagServerCertificateResponsePrivate class provides private implementation for TagServerCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagServerCertificateResponsePrivate object with public implementation \a q.
 */
TagServerCertificateResponsePrivate::TagServerCertificateResponsePrivate(
    TagServerCertificateResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagServerCertificate response element from \a xml.
 */
void TagServerCertificateResponsePrivate::parseTagServerCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagServerCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
