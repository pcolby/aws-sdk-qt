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

#include "deleteconfigurationsettrackingoptionsresponse.h"
#include "deleteconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteConfigurationSetTrackingOptionsResponse
 * \brief The DeleteConfigurationSetTrackingOptionsResponse class provides an interace for Ses DeleteConfigurationSetTrackingOptions responses.
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
 * \sa SesClient::deleteConfigurationSetTrackingOptions
 */

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetTrackingOptionsResponse::DeleteConfigurationSetTrackingOptionsResponse(
        const DeleteConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new DeleteConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConfigurationSetTrackingOptionsRequest * DeleteConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const DeleteConfigurationSetTrackingOptionsResponse);
    return static_cast<const DeleteConfigurationSetTrackingOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses DeleteConfigurationSetTrackingOptions \a response.
 */
void DeleteConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::DeleteConfigurationSetTrackingOptionsResponsePrivate
 * \brief The DeleteConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for DeleteConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetTrackingOptionsResponsePrivate::DeleteConfigurationSetTrackingOptionsResponsePrivate(
    DeleteConfigurationSetTrackingOptionsResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses DeleteConfigurationSetTrackingOptions response element from \a xml.
 */
void DeleteConfigurationSetTrackingOptionsResponsePrivate::parseDeleteConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetTrackingOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
