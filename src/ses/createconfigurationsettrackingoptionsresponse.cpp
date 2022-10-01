// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationsettrackingoptionsresponse.h"
#include "createconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateConfigurationSetTrackingOptionsResponse
 * \brief The CreateConfigurationSetTrackingOptionsResponse class provides an interace for Ses CreateConfigurationSetTrackingOptions responses.
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
 * \sa SesClient::createConfigurationSetTrackingOptions
 */

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetTrackingOptionsResponse::CreateConfigurationSetTrackingOptionsResponse(
        const CreateConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetTrackingOptionsRequest * CreateConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const CreateConfigurationSetTrackingOptionsResponse);
    return static_cast<const CreateConfigurationSetTrackingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateConfigurationSetTrackingOptions \a response.
 */
void CreateConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateConfigurationSetTrackingOptionsResponsePrivate
 * \brief The CreateConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for CreateConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetTrackingOptionsResponsePrivate::CreateConfigurationSetTrackingOptionsResponsePrivate(
    CreateConfigurationSetTrackingOptionsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateConfigurationSetTrackingOptions response element from \a xml.
 */
void CreateConfigurationSetTrackingOptionsResponsePrivate::parseCreateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetTrackingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
