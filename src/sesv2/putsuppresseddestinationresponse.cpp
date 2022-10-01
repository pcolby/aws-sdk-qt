// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsuppresseddestinationresponse.h"
#include "putsuppresseddestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutSuppressedDestinationResponse
 * \brief The PutSuppressedDestinationResponse class provides an interace for SESv2 PutSuppressedDestination responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::putSuppressedDestination
 */

/*!
 * Constructs a PutSuppressedDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
PutSuppressedDestinationResponse::PutSuppressedDestinationResponse(
        const PutSuppressedDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutSuppressedDestinationResponsePrivate(this), parent)
{
    setRequest(new PutSuppressedDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSuppressedDestinationRequest * PutSuppressedDestinationResponse::request() const
{
    Q_D(const PutSuppressedDestinationResponse);
    return static_cast<const PutSuppressedDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutSuppressedDestination \a response.
 */
void PutSuppressedDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSuppressedDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutSuppressedDestinationResponsePrivate
 * \brief The PutSuppressedDestinationResponsePrivate class provides private implementation for PutSuppressedDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutSuppressedDestinationResponsePrivate object with public implementation \a q.
 */
PutSuppressedDestinationResponsePrivate::PutSuppressedDestinationResponsePrivate(
    PutSuppressedDestinationResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutSuppressedDestination response element from \a xml.
 */
void PutSuppressedDestinationResponsePrivate::parsePutSuppressedDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSuppressedDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
