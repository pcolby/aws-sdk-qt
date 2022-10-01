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

#include "putconfigurationsettrackingoptionsresponse.h"
#include "putconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutConfigurationSetTrackingOptionsResponse
 * \brief The PutConfigurationSetTrackingOptionsResponse class provides an interace for SESv2 PutConfigurationSetTrackingOptions responses.
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
 * \sa SESv2Client::putConfigurationSetTrackingOptions
 */

/*!
 * Constructs a PutConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
PutConfigurationSetTrackingOptionsResponse::PutConfigurationSetTrackingOptionsResponse(
        const PutConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new PutConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new PutConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutConfigurationSetTrackingOptionsRequest * PutConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const PutConfigurationSetTrackingOptionsResponse);
    return static_cast<const PutConfigurationSetTrackingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 PutConfigurationSetTrackingOptions \a response.
 */
void PutConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::PutConfigurationSetTrackingOptionsResponsePrivate
 * \brief The PutConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for PutConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
PutConfigurationSetTrackingOptionsResponsePrivate::PutConfigurationSetTrackingOptionsResponsePrivate(
    PutConfigurationSetTrackingOptionsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 PutConfigurationSetTrackingOptions response element from \a xml.
 */
void PutConfigurationSetTrackingOptionsResponsePrivate::parsePutConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigurationSetTrackingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
