// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "putconfigurationsetdeliveryoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutConfigurationSetDeliveryOptionsResponse
 * \brief The PutConfigurationSetDeliveryOptionsResponse class provides an interace for SESv2 PutConfigurationSetDeliveryOptions responses.
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
 * \sa SESv2Client::putConfigurationSetDeliveryOptions
 */

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutConfigurationSetDeliveryOptionsResponse::PutConfigurationSetDeliveryOptionsResponse(
        const PutConfigurationSetDeliveryOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutConfigurationSetDeliveryOptionsResponsePrivate(this), parent)
{
    setRequest(new PutConfigurationSetDeliveryOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutConfigurationSetDeliveryOptionsRequest * PutConfigurationSetDeliveryOptionsResponse::request() const
{
    Q_D(const PutConfigurationSetDeliveryOptionsResponse);
    return static_cast<const PutConfigurationSetDeliveryOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutConfigurationSetDeliveryOptions \a response.
 */
void PutConfigurationSetDeliveryOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutConfigurationSetDeliveryOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutConfigurationSetDeliveryOptionsResponsePrivate
 * \brief The PutConfigurationSetDeliveryOptionsResponsePrivate class provides private implementation for PutConfigurationSetDeliveryOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsResponsePrivate object with public implementation \a q.
 */
PutConfigurationSetDeliveryOptionsResponsePrivate::PutConfigurationSetDeliveryOptionsResponsePrivate(
    PutConfigurationSetDeliveryOptionsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutConfigurationSetDeliveryOptions response element from \a xml.
 */
void PutConfigurationSetDeliveryOptionsResponsePrivate::parsePutConfigurationSetDeliveryOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationSetDeliveryOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
