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

#include "putdialrequestbatchresponse.h"
#include "putdialrequestbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::PutDialRequestBatchResponse
 * \brief The PutDialRequestBatchResponse class provides an interace for ConnectCampaigns PutDialRequestBatch responses.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::putDialRequestBatch
 */

/*!
 * Constructs a PutDialRequestBatchResponse object for \a reply to \a request, with parent \a parent.
 */
PutDialRequestBatchResponse::PutDialRequestBatchResponse(
        const PutDialRequestBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectCampaignsResponse(new PutDialRequestBatchResponsePrivate(this), parent)
{
    setRequest(new PutDialRequestBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDialRequestBatchRequest * PutDialRequestBatchResponse::request() const
{
    Q_D(const PutDialRequestBatchResponse);
    return static_cast<const PutDialRequestBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ConnectCampaigns PutDialRequestBatch \a response.
 */
void PutDialRequestBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDialRequestBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ConnectCampaigns::PutDialRequestBatchResponsePrivate
 * \brief The PutDialRequestBatchResponsePrivate class provides private implementation for PutDialRequestBatchResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a PutDialRequestBatchResponsePrivate object with public implementation \a q.
 */
PutDialRequestBatchResponsePrivate::PutDialRequestBatchResponsePrivate(
    PutDialRequestBatchResponse * const q) : ConnectCampaignsResponsePrivate(q)
{

}

/*!
 * Parses a ConnectCampaigns PutDialRequestBatch response element from \a xml.
 */
void PutDialRequestBatchResponsePrivate::parsePutDialRequestBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDialRequestBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ConnectCampaigns
} // namespace QtAws
