// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedestinationresponse.h"
#include "updatedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::UpdateDestinationResponse
 * \brief The UpdateDestinationResponse class provides an interace for Firehose UpdateDestination responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::updateDestination
 */

/*!
 * Constructs a UpdateDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDestinationResponse::UpdateDestinationResponse(
        const UpdateDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new UpdateDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDestinationRequest * UpdateDestinationResponse::request() const
{
    Q_D(const UpdateDestinationResponse);
    return static_cast<const UpdateDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose UpdateDestination \a response.
 */
void UpdateDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::UpdateDestinationResponsePrivate
 * \brief The UpdateDestinationResponsePrivate class provides private implementation for UpdateDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a UpdateDestinationResponsePrivate object with public implementation \a q.
 */
UpdateDestinationResponsePrivate::UpdateDestinationResponsePrivate(
    UpdateDestinationResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose UpdateDestination response element from \a xml.
 */
void UpdateDestinationResponsePrivate::parseUpdateDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
