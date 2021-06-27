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
    return static_cast<const DescribeDetectorModelRequest *>(IoTEventsResponse::request());
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
