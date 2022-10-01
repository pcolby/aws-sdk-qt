// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putconfigurationsetdeliveryoptionsresponse.h"
#include "putconfigurationsetdeliveryoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::PutConfigurationSetDeliveryOptionsResponse
 * \brief The PutConfigurationSetDeliveryOptionsResponse class provides an interace for Ses PutConfigurationSetDeliveryOptions responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::putConfigurationSetDeliveryOptions
 */

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutConfigurationSetDeliveryOptionsResponse::PutConfigurationSetDeliveryOptionsResponse(
        const PutConfigurationSetDeliveryOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new PutConfigurationSetDeliveryOptionsResponsePrivate(this), parent)
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
 * Parses a successful Ses PutConfigurationSetDeliveryOptions \a response.
 */
void PutConfigurationSetDeliveryOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutConfigurationSetDeliveryOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::PutConfigurationSetDeliveryOptionsResponsePrivate
 * \brief The PutConfigurationSetDeliveryOptionsResponsePrivate class provides private implementation for PutConfigurationSetDeliveryOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a PutConfigurationSetDeliveryOptionsResponsePrivate object with public implementation \a q.
 */
PutConfigurationSetDeliveryOptionsResponsePrivate::PutConfigurationSetDeliveryOptionsResponsePrivate(
    PutConfigurationSetDeliveryOptionsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses PutConfigurationSetDeliveryOptions response element from \a xml.
 */
void PutConfigurationSetDeliveryOptionsResponsePrivate::parsePutConfigurationSetDeliveryOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationSetDeliveryOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
