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

#include "getrevisionresponse.h"
#include "getrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataExchange {

/*!
 * \class QtAws::DataExchange::GetRevisionResponse
 * \brief The GetRevisionResponse class provides an interace for DataExchange GetRevision responses.
 *
 * \inmodule QtAwsDataExchange
 *
 *  AWS Data Exchange is a service that makes it easy for AWS customers to exchange data in the cloud. You can use the AWS
 *  Data Exchange APIs to create, update, manage, and access file-based data set in the AWS Cloud.</p><p>As a subscriber,
 *  you can view and access the data sets that you have an entitlement to through a subscription. You can use the APIS to
 *  download or copy your entitled data sets to Amazon S3 for use across a variety of AWS analytics and machine learning
 *  services.</p><p>As a provider, you can create and manage your data sets that you would like to publish to a product.
 *  Being able to package and provide your data sets into products requires a few steps to determine eligibility. For more
 *  information, visit the AWS Data Exchange User Guide.</p><p>A data set is a collection of data that can be changed or
 *  updated over time. Data sets can be updated using revisions, which represent a new version or incremental change to a
 *  data set. A revision contains one or more assets. An asset in AWS Data Exchange is a piece of data that can be stored as
 *  an Amazon S3 object. The asset can be a structured data file, an image file, or some other data file. Jobs are
 *  asynchronous import or export operations used to create or copy
 *
 * \sa DataExchangeClient::getRevision
 */

/*!
 * Constructs a GetRevisionResponse object for \a reply to \a request, with parent \a parent.
 */
GetRevisionResponse::GetRevisionResponse(
        const GetRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataExchangeResponse(new GetRevisionResponsePrivate(this), parent)
{
    setRequest(new GetRevisionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRevisionRequest * GetRevisionResponse::request() const
{
    Q_D(const GetRevisionResponse);
    return static_cast<const GetRevisionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataExchange GetRevision \a response.
 */
void GetRevisionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataExchange::GetRevisionResponsePrivate
 * \brief The GetRevisionResponsePrivate class provides private implementation for GetRevisionResponse.
 * \internal
 *
 * \inmodule QtAwsDataExchange
 */

/*!
 * Constructs a GetRevisionResponsePrivate object with public implementation \a q.
 */
GetRevisionResponsePrivate::GetRevisionResponsePrivate(
    GetRevisionResponse * const q) : DataExchangeResponsePrivate(q)
{

}

/*!
 * Parses a DataExchange GetRevision response element from \a xml.
 */
void GetRevisionResponsePrivate::parseGetRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRevisionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataExchange
} // namespace QtAws
