// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DisassociateCertificateResponse);
    return static_cast<const DisassociateCertificateRequest *>(d->request);
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
