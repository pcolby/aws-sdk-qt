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

#include "disassociatecertificateresponse.h"
#include "disassociatecertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DisassociateCertificateResponse
 * \brief The DisassociateCertificateResponse class provides an interace for MediaConvert DisassociateCertificate responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::disassociateCertificate
 */

/*!
 * Constructs a DisassociateCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateCertificateResponse::DisassociateCertificateResponse(
        const DisassociateCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DisassociateCertificateResponsePrivate(this), parent)
{
    setRequest(new DisassociateCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateCertificateRequest * DisassociateCertificateResponse::request() const
{
    return static_cast<const DisassociateCertificateRequest *>(MediaConvertResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConvert DisassociateCertificate \a response.
 */
void DisassociateCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::DisassociateCertificateResponsePrivate
 * \brief The DisassociateCertificateResponsePrivate class provides private implementation for DisassociateCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DisassociateCertificateResponsePrivate object with public implementation \a q.
 */
DisassociateCertificateResponsePrivate::DisassociateCertificateResponsePrivate(
    DisassociateCertificateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert DisassociateCertificate response element from \a xml.
 */
void DisassociateCertificateResponsePrivate::parseDisassociateCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
