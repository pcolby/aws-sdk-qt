// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedetectormodelresponse.h"
#include "describedetectormodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTEvents {

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelResponse
 * \brief The DescribeDetectorModelResponse class provides an interace for IoTEvents DescribeDetectorModel responses.
 *
 * \inmodule QtAwsIoTEvents
 *
 *  AWS IoT Events monitors your equipment or device fleets for failures or changes in operation, and triggers actions when
 *  such events occur. You can use AWS IoT Events API operations to create, read, update, and delete inputs and detector
 *  models, and to list their
 *
 * \sa IoTEventsClient::describeDetectorModel
 */

/*!
 * Constructs a DescribeDetectorModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDetectorModelResponse::DescribeDetectorModelResponse(
        const DescribeDetectorModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTEventsResponse(new DescribeDetectorModelResponsePrivate(this), parent)
{
    setRequest(new DescribeDetectorModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDetectorModelRequest * DescribeDetectorModelResponse::request() const
{
    Q_D(const DescribeDetectorModelResponse);
    return static_cast<const DescribeDetectorModelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTEvents DescribeDetectorModel \a response.
 */
void DescribeDetectorModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDetectorModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTEvents::DescribeDetectorModelResponsePrivate
 * \brief The DescribeDetectorModelResponsePrivate class provides private implementation for DescribeDetectorModelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTEvents
 */

/*!
 * Constructs a DescribeDetectorModelResponsePrivate object with public implementation \a q.
 */
DescribeDetectorModelResponsePrivate::DescribeDetectorModelResponsePrivate(
    DescribeDetectorModelResponse * const q) : IoTEventsResponsePrivate(q)
{

}

/*!
 * Parses a IoTEvents DescribeDetectorModel response element from \a xml.
 */
void DescribeDetectorModelResponsePrivate::parseDescribeDetectorModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDetectorModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTEvents
} // namespace QtAws
