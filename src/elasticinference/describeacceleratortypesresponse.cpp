// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeacceleratortypesresponse.h"
#include "describeacceleratortypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticInference {

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesResponse
 * \brief The DescribeAcceleratorTypesResponse class provides an interace for ElasticInference DescribeAcceleratorTypes responses.
 *
 * \inmodule QtAwsElasticInference
 *
 *  Elastic Inference public APIs.
 *
 * \sa ElasticInferenceClient::describeAcceleratorTypes
 */

/*!
 * Constructs a DescribeAcceleratorTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAcceleratorTypesResponse::DescribeAcceleratorTypesResponse(
        const DescribeAcceleratorTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticInferenceResponse(new DescribeAcceleratorTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAcceleratorTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAcceleratorTypesRequest * DescribeAcceleratorTypesResponse::request() const
{
    Q_D(const DescribeAcceleratorTypesResponse);
    return static_cast<const DescribeAcceleratorTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticInference DescribeAcceleratorTypes \a response.
 */
void DescribeAcceleratorTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAcceleratorTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticInference::DescribeAcceleratorTypesResponsePrivate
 * \brief The DescribeAcceleratorTypesResponsePrivate class provides private implementation for DescribeAcceleratorTypesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticInference
 */

/*!
 * Constructs a DescribeAcceleratorTypesResponsePrivate object with public implementation \a q.
 */
DescribeAcceleratorTypesResponsePrivate::DescribeAcceleratorTypesResponsePrivate(
    DescribeAcceleratorTypesResponse * const q) : ElasticInferenceResponsePrivate(q)
{

}

/*!
 * Parses a ElasticInference DescribeAcceleratorTypes response element from \a xml.
 */
void DescribeAcceleratorTypesResponsePrivate::parseDescribeAcceleratorTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAcceleratorTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticInference
} // namespace QtAws
