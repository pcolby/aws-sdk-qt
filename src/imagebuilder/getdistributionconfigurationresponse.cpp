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

#include "getdistributionconfigurationresponse.h"
#include "getdistributionconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetDistributionConfigurationResponse
 * \brief The GetDistributionConfigurationResponse class provides an interace for imagebuilder GetDistributionConfiguration responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getDistributionConfiguration
 */

/*!
 * Constructs a GetDistributionConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDistributionConfigurationResponse::GetDistributionConfigurationResponse(
        const GetDistributionConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new GetDistributionConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetDistributionConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDistributionConfigurationRequest * GetDistributionConfigurationResponse::request() const
{
    return static_cast<const GetDistributionConfigurationRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder GetDistributionConfiguration \a response.
 */
void GetDistributionConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDistributionConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::GetDistributionConfigurationResponsePrivate
 * \brief The GetDistributionConfigurationResponsePrivate class provides private implementation for GetDistributionConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetDistributionConfigurationResponsePrivate object with public implementation \a q.
 */
GetDistributionConfigurationResponsePrivate::GetDistributionConfigurationResponsePrivate(
    GetDistributionConfigurationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder GetDistributionConfiguration response element from \a xml.
 */
void GetDistributionConfigurationResponsePrivate::parseGetDistributionConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDistributionConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
