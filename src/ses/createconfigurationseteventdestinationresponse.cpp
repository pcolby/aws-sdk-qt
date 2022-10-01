// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationseteventdestinationresponse.h"
#include "createconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateConfigurationSetEventDestinationResponse
 * \brief The CreateConfigurationSetEventDestinationResponse class provides an interace for Ses CreateConfigurationSetEventDestination responses.
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
 * \sa SesClient::createConfigurationSetEventDestination
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetEventDestinationResponse::CreateConfigurationSetEventDestinationResponse(
        const CreateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetEventDestinationRequest * CreateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const CreateConfigurationSetEventDestinationResponse);
    return static_cast<const CreateConfigurationSetEventDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateConfigurationSetEventDestination \a response.
 */
void CreateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateConfigurationSetEventDestinationResponsePrivate
 * \brief The CreateConfigurationSetEventDestinationResponsePrivate class provides private implementation for CreateConfigurationSetEventDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetEventDestinationResponsePrivate::CreateConfigurationSetEventDestinationResponsePrivate(
    CreateConfigurationSetEventDestinationResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateConfigurationSetEventDestination response element from \a xml.
 */
void CreateConfigurationSetEventDestinationResponsePrivate::parseCreateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetEventDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
