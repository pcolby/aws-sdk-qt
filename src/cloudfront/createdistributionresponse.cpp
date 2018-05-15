/*
    Copyright 2013-2018 Paul Colby

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

#include "createdistributionresponse.h"
#include "createdistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionResponse
 * \brief The CreateDistributionResponse class provides an interace for CloudFront CreateDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistribution
 */

/*!
 * Constructs a CreateDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDistributionResponse::CreateDistributionResponse(
        const CreateDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateDistributionResponsePrivate(this), parent)
{
    setRequest(new CreateDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDistributionRequest * CreateDistributionResponse::request() const
{
    Q_D(const CreateDistributionResponse);
    return static_cast<const CreateDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront CreateDistribution \a response.
 */
void CreateDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::CreateDistributionResponsePrivate
 * \brief The CreateDistributionResponsePrivate class provides private implementation for CreateDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateDistributionResponsePrivate object with public implementation \a q.
 */
CreateDistributionResponsePrivate::CreateDistributionResponsePrivate(
    CreateDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront CreateDistribution response element from \a xml.
 */
void CreateDistributionResponsePrivate::parseCreateDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
