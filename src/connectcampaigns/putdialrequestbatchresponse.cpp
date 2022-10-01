// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
