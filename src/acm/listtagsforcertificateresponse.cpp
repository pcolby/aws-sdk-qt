/*
    Copyright 2013-2019 Paul Colby

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

#include "listtagsforcertificateresponse.h"
#include "listtagsforcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ListTagsForCertificateResponse
 * \brief The ListTagsForCertificateResponse class provides an interace for ACM ListTagsForCertificate responses.
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
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/"> <i>AWS Certificate Manager User
 *  Guide</i>
 *
 * \sa AcmClient::listTagsForCertificate
 */

/*!
 * Constructs a ListTagsForCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForCertificateResponse::ListTagsForCertificateResponse(
        const ListTagsForCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ListTagsForCertificateResponsePrivate(this), parent)
{
    setRequest(new ListTagsForCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForCertificateRequest * ListTagsForCertificateResponse::request() const
{
    Q_D(const ListTagsForCertificateResponse);
    return static_cast<const ListTagsForCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM ListTagsForCertificate \a response.
 */
void ListTagsForCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::ListTagsForCertificateResponsePrivate
 * \brief The ListTagsForCertificateResponsePrivate class provides private implementation for ListTagsForCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a ListTagsForCertificateResponsePrivate object with public implementation \a q.
 */
ListTagsForCertificateResponsePrivate::ListTagsForCertificateResponsePrivate(
    ListTagsForCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM ListTagsForCertificate response element from \a xml.
 */
void ListTagsForCertificateResponsePrivate::parseListTagsForCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACM
} // namespace QtAws
