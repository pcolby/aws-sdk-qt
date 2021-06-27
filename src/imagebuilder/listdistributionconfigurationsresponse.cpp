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

#include "listdistributionconfigurationsresponse.h"
#include "listdistributionconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListDistributionConfigurationsResponse
 * \brief The ListDistributionConfigurationsResponse class provides an interace for imagebuilder ListDistributionConfigurations responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listDistributionConfigurations
 */

/*!
 * Constructs a ListDistributionConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributionConfigurationsResponse::ListDistributionConfigurationsResponse(
        const ListDistributionConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListDistributionConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListDistributionConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributionConfigurationsRequest * ListDistributionConfigurationsResponse::request() const
{
    return static_cast<const ListDistributionConfigurationsRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListDistributionConfigurations \a response.
 */
void ListDistributionConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributionConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListDistributionConfigurationsResponsePrivate
 * \brief The ListDistributionConfigurationsResponsePrivate class provides private implementation for ListDistributionConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListDistributionConfigurationsResponsePrivate object with public implementation \a q.
 */
ListDistributionConfigurationsResponsePrivate::ListDistributionConfigurationsResponsePrivate(
    ListDistributionConfigurationsResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListDistributionConfigurations response element from \a xml.
 */
void ListDistributionConfigurationsResponsePrivate::parseListDistributionConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
