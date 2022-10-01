// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationsetresponse.h"
#include "createconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateConfigurationSetResponse
 * \brief The CreateConfigurationSetResponse class provides an interace for Ses CreateConfigurationSet responses.
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
 * \sa SesClient::createConfigurationSet
 */

/*!
 * Constructs a CreateConfigurationSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationSetResponse::CreateConfigurationSetResponse(
        const CreateConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationSetRequest * CreateConfigurationSetResponse::request() const
{
    Q_D(const CreateConfigurationSetResponse);
    return static_cast<const CreateConfigurationSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateConfigurationSet \a response.
 */
void CreateConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateConfigurationSetResponsePrivate
 * \brief The CreateConfigurationSetResponsePrivate class provides private implementation for CreateConfigurationSetResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateConfigurationSetResponsePrivate object with public implementation \a q.
 */
CreateConfigurationSetResponsePrivate::CreateConfigurationSetResponsePrivate(
    CreateConfigurationSetResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateConfigurationSet response element from \a xml.
 */
void CreateConfigurationSetResponsePrivate::parseCreateConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
