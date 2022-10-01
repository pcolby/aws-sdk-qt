// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeacceleratorofferingsresponse.h"
#include "describeacceleratorofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsResponse
 * \brief The DescribeAcceleratorOfferingsResponse class provides an interace for ElasticInference DescribeAcceleratorOfferings responses.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorOfferings
 */

/*!
 * Constructs a DescribeAcceleratorOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorOfferingsResponse::DescribeAcceleratorOfferingsResponse(
        const DescribeAcceleratorOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticInferenceResponse(new DescribeAcceleratorOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorOfferingsRequest * DescribeAcceleratorOfferingsResponse::request() const
{
    Q_D(const DescribeAcceleratorOfferingsResponse);
    return static_cast<const DescribeAcceleratorOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticInference DescribeAcceleratorOfferings \a response.
 */
void DescribeAcceleratorOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorOfferingsResponsePrivate
 * \brief The DescribeAcceleratorOfferingsResponsePrivate class provides private implementation for DescribeAcceleratorOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorOfferingsResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorOfferingsResponsePrivate::DescribeAcceleratorOfferingsResponsePrivate(
    DescribeAcceleratorOfferingsResponse * const q) : ElasticInferenceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticInference DescribeAcceleratorOfferings response element from \a xml.
 */
void DescribeAcceleratorOfferingsResponsePrivate::parseDescribeAcceleratorOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticInference
} // namespace QtAws
