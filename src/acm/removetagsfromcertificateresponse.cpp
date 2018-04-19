/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "removetagsfromcertificateresponse.h"
#include "removetagsfromcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::RemoveTagsFromCertificateResponse
 * \brief The RemoveTagsFromCertificateResponse class provides an interace for ACM RemoveTagsFromCertificate responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa AcmClient::removeTagsFromCertificate
 */

/*!
 * Constructs a RemoveTagsFromCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTagsFromCertificateResponse::RemoveTagsFromCertificateResponse(
        const RemoveTagsFromCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ACMResponse(new RemoveTagsFromCertificateResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTagsFromCertificateRequest * RemoveTagsFromCertificateResponse::request() const
{
    Q_D(const RemoveTagsFromCertificateResponse);
    return static_cast<const RemoveTagsFromCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM RemoveTagsFromCertificate \a response.
 */
void RemoveTagsFromCertificateResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveTagsFromCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::RemoveTagsFromCertificateResponsePrivate
 * \brief The RemoveTagsFromCertificateResponsePrivate class provides private implementation for RemoveTagsFromCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a RemoveTagsFromCertificateResponsePrivate object with public implementation \a q.
 */
RemoveTagsFromCertificateResponsePrivate::RemoveTagsFromCertificateResponsePrivate(
    RemoveTagsFromCertificateResponse * const q) : ACMResponsePrivate(q)
{

}

/*!
 * Parses a ACM RemoveTagsFromCertificate response element from \a xml.
 */
void RemoveTagsFromCertificateResponsePrivate::parseRemoveTagsFromCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromCertificateResponse"));
    /// @todo
}

} // namespace ACM
} // namespace QtAws
