// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
