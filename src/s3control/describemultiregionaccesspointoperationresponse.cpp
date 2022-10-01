// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemultiregionaccesspointoperationresponse.h"
#include "describemultiregionaccesspointoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationResponse
 * \brief The DescribeMultiRegionAccessPointOperationResponse class provides an interace for S3Control DescribeMultiRegionAccessPointOperation responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::describeMultiRegionAccessPointOperation
 */

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMultiRegionAccessPointOperationResponse::DescribeMultiRegionAccessPointOperationResponse(
        const DescribeMultiRegionAccessPointOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DescribeMultiRegionAccessPointOperationResponsePrivate(this), parent)
{
    setRequest(new DescribeMultiRegionAccessPointOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMultiRegionAccessPointOperationRequest * DescribeMultiRegionAccessPointOperationResponse::request() const
{
    Q_D(const DescribeMultiRegionAccessPointOperationResponse);
    return static_cast<const DescribeMultiRegionAccessPointOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DescribeMultiRegionAccessPointOperation \a response.
 */
void DescribeMultiRegionAccessPointOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMultiRegionAccessPointOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationResponsePrivate
 * \brief The DescribeMultiRegionAccessPointOperationResponsePrivate class provides private implementation for DescribeMultiRegionAccessPointOperationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationResponsePrivate object with public implementation \a q.
 */
DescribeMultiRegionAccessPointOperationResponsePrivate::DescribeMultiRegionAccessPointOperationResponsePrivate(
    DescribeMultiRegionAccessPointOperationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DescribeMultiRegionAccessPointOperation response element from \a xml.
 */
void DescribeMultiRegionAccessPointOperationResponsePrivate::parseDescribeMultiRegionAccessPointOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMultiRegionAccessPointOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
