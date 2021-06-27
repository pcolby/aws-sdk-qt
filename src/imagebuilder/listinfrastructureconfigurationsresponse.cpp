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

#include "listinfrastructureconfigurationsresponse.h"
#include "listinfrastructureconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListInfrastructureConfigurationsResponse
 * \brief The ListInfrastructureConfigurationsResponse class provides an interace for imagebuilder ListInfrastructureConfigurations responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listInfrastructureConfigurations
 */

/*!
 * Constructs a ListInfrastructureConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInfrastructureConfigurationsResponse::ListInfrastructureConfigurationsResponse(
        const ListInfrastructureConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListInfrastructureConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListInfrastructureConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInfrastructureConfigurationsRequest * ListInfrastructureConfigurationsResponse::request() const
{
    return static_cast<const ListInfrastructureConfigurationsRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListInfrastructureConfigurations \a response.
 */
void ListInfrastructureConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInfrastructureConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListInfrastructureConfigurationsResponsePrivate
 * \brief The ListInfrastructureConfigurationsResponsePrivate class provides private implementation for ListInfrastructureConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListInfrastructureConfigurationsResponsePrivate object with public implementation \a q.
 */
ListInfrastructureConfigurationsResponsePrivate::ListInfrastructureConfigurationsResponsePrivate(
    ListInfrastructureConfigurationsResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListInfrastructureConfigurations response element from \a xml.
 */
void ListInfrastructureConfigurationsResponsePrivate::parseListInfrastructureConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInfrastructureConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
