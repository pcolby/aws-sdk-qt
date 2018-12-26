/*
    Copyright 2013-2018 Paul Colby

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

#include "associatecertificateresponse.h"
#include "associatecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::AssociateCertificateResponse
 * \brief The AssociateCertificateResponse class provides an interace for MediaConvert AssociateCertificate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::associateCertificate
 */

/*!
 * Constructs a AssociateCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateCertificateResponse::AssociateCertificateResponse(
        const AssociateCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new AssociateCertificateResponsePrivate(this), parent)
{
    setRequest(new AssociateCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateCertificateRequest * AssociateCertificateResponse::request() const
{
    Q_D(const AssociateCertificateResponse);
    return static_cast<const AssociateCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert AssociateCertificate \a response.
 */
void AssociateCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::AssociateCertificateResponsePrivate
 * \brief The AssociateCertificateResponsePrivate class provides private implementation for AssociateCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a AssociateCertificateResponsePrivate object with public implementation \a q.
 */
AssociateCertificateResponsePrivate::AssociateCertificateResponsePrivate(
    AssociateCertificateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert AssociateCertificate response element from \a xml.
 */
void AssociateCertificateResponsePrivate::parseAssociateCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
