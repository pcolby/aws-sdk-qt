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

#include "deletedistributionresponse.h"
#include "deletedistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteDistributionResponse
 * \brief The DeleteDistributionResponse class provides an interace for CloudFront DeleteDistribution responses.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteDistribution
 */

/*!
 * Constructs a DeleteDistributionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDistributionResponse::DeleteDistributionResponse(
        const DeleteDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteDistributionResponsePrivate(this), parent)
{
    setRequest(new DeleteDistributionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDistributionRequest * DeleteDistributionResponse::request() const
{
    Q_D(const DeleteDistributionResponse);
    return static_cast<const DeleteDistributionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFront DeleteDistribution \a response.
 */
void DeleteDistributionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDistributionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFront::DeleteDistributionResponsePrivate
 * \brief The DeleteDistributionResponsePrivate class provides private implementation for DeleteDistributionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteDistributionResponsePrivate object with public implementation \a q.
 */
DeleteDistributionResponsePrivate::DeleteDistributionResponsePrivate(
    DeleteDistributionResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/*!
 * Parses a CloudFront DeleteDistribution response element from \a xml.
 */
void DeleteDistributionResponsePrivate::parseDeleteDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDistributionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFront
} // namespace QtAws
