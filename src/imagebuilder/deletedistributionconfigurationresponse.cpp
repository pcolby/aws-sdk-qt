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

#include "deletedistributionconfigurationresponse.h"
#include "deletedistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteDistributionConfigurationResponse
 * \brief The DeleteDistributionConfigurationResponse class provides an interace for imagebuilder DeleteDistributionConfiguration responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteDistributionConfiguration
 */

/*!
 * Constructs a DeleteDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDistributionConfigurationResponse::DeleteDistributionConfigurationResponse(
        const DeleteDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new DeleteDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDistributionConfigurationRequest * DeleteDistributionConfigurationResponse::request() const
{
    return static_cast<const DeleteDistributionConfigurationRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder DeleteDistributionConfiguration \a response.
 */
void DeleteDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::DeleteDistributionConfigurationResponsePrivate
 * \brief The DeleteDistributionConfigurationResponsePrivate class provides private implementation for DeleteDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteDistributionConfigurationResponsePrivate::DeleteDistributionConfigurationResponsePrivate(
    DeleteDistributionConfigurationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder DeleteDistributionConfiguration response element from \a xml.
 */
void DeleteDistributionConfigurationResponsePrivate::parseDeleteDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
