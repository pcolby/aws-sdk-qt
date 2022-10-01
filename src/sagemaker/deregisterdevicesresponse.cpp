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

#include "deregisterdevicesresponse.h"
#include "deregisterdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeregisterDevicesResponse
 * \brief The DeregisterDevicesResponse class provides an interace for SageMaker DeregisterDevices responses.
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
 * \sa SageMakerClient::deregisterDevices
 */

/*!
 * Constructs a DeregisterDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterDevicesResponse::DeregisterDevicesResponse(
        const DeregisterDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeregisterDevicesResponsePrivate(this), parent)
{
    setRequest(new DeregisterDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterDevicesRequest * DeregisterDevicesResponse::request() const
{
    Q_D(const DeregisterDevicesResponse);
    return static_cast<const DeregisterDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeregisterDevices \a response.
 */
void DeregisterDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeregisterDevicesResponsePrivate
 * \brief The DeregisterDevicesResponsePrivate class provides private implementation for DeregisterDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeregisterDevicesResponsePrivate object with public implementation \a q.
 */
DeregisterDevicesResponsePrivate::DeregisterDevicesResponsePrivate(
    DeregisterDevicesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeregisterDevices response element from \a xml.
 */
void DeregisterDevicesResponsePrivate::parseDeregisterDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
