// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedevicefleetresponse.h"
#include "describedevicefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDeviceFleetResponse
 * \brief The DescribeDeviceFleetResponse class provides an interace for SageMaker DescribeDeviceFleet responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeDeviceFleet
 */

/*!
 * Constructs a DescribeDeviceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceFleetResponse::DescribeDeviceFleetResponse(
        const DescribeDeviceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeDeviceFleetResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceFleetRequest * DescribeDeviceFleetResponse::request() const
{
    Q_D(const DescribeDeviceFleetResponse);
    return static_cast<const DescribeDeviceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeDeviceFleet \a response.
 */
void DescribeDeviceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeDeviceFleetResponsePrivate
 * \brief The DescribeDeviceFleetResponsePrivate class provides private implementation for DescribeDeviceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDeviceFleetResponsePrivate object with public implementation \a q.
 */
DescribeDeviceFleetResponsePrivate::DescribeDeviceFleetResponsePrivate(
    DescribeDeviceFleetResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeDeviceFleet response element from \a xml.
 */
void DescribeDeviceFleetResponsePrivate::parseDescribeDeviceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
