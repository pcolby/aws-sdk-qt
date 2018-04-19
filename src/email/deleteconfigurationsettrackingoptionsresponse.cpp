/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteconfigurationsettrackingoptionsresponse.h"
#include "deleteconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteConfigurationSetTrackingOptionsResponse
 * \brief The DeleteConfigurationSetTrackingOptionsResponse class provides an interace for SES DeleteConfigurationSetTrackingOptions responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::deleteConfigurationSetTrackingOptions
 */

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConfigurationSetTrackingOptionsResponse::DeleteConfigurationSetTrackingOptionsResponse(
        const DeleteConfigurationSetTrackingOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteConfigurationSetTrackingOptionsResponsePrivate(this), parent)
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
 * Parses a successful SES DeleteConfigurationSetTrackingOptions \a response.
 */
void DeleteConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigurationSetTrackingOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::DeleteConfigurationSetTrackingOptionsResponsePrivate
 * \brief The DeleteConfigurationSetTrackingOptionsResponsePrivate class provides private implementation for DeleteConfigurationSetTrackingOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsResponsePrivate object with public implementation \a q.
 */
DeleteConfigurationSetTrackingOptionsResponsePrivate::DeleteConfigurationSetTrackingOptionsResponsePrivate(
    DeleteConfigurationSetTrackingOptionsResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * Parses a SES DeleteConfigurationSetTrackingOptions response element from \a xml.
 */
void DeleteConfigurationSetTrackingOptionsResponsePrivate::parseDeleteConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationSetTrackingOptionsResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
