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

#include "liststagedevicesresponse.h"
#include "liststagedevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListStageDevicesResponse
 * \brief The ListStageDevicesResponse class provides an interace for SageMaker ListStageDevices responses.
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
 * \sa SageMakerClient::listStageDevices
 */

/*!
 * Constructs a ListStageDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListStageDevicesResponse::ListStageDevicesResponse(
        const ListStageDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListStageDevicesResponsePrivate(this), parent)
{
    setRequest(new ListStageDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStageDevicesRequest * ListStageDevicesResponse::request() const
{
    Q_D(const ListStageDevicesResponse);
    return static_cast<const ListStageDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListStageDevices \a response.
 */
void ListStageDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStageDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListStageDevicesResponsePrivate
 * \brief The ListStageDevicesResponsePrivate class provides private implementation for ListStageDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListStageDevicesResponsePrivate object with public implementation \a q.
 */
ListStageDevicesResponsePrivate::ListStageDevicesResponsePrivate(
    ListStageDevicesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListStageDevices response element from \a xml.
 */
void ListStageDevicesResponsePrivate::parseListStageDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStageDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
