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

#include "registerdevicesresponse.h"
#include "registerdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RegisterDevicesResponse
 * \brief The RegisterDevicesResponse class provides an interace for SageMaker RegisterDevices responses.
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
 * \sa SageMakerClient::registerDevices
 */

/*!
 * Constructs a RegisterDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterDevicesResponse::RegisterDevicesResponse(
        const RegisterDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new RegisterDevicesResponsePrivate(this), parent)
{
    setRequest(new RegisterDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterDevicesRequest * RegisterDevicesResponse::request() const
{
    Q_D(const RegisterDevicesResponse);
    return static_cast<const RegisterDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker RegisterDevices \a response.
 */
void RegisterDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::RegisterDevicesResponsePrivate
 * \brief The RegisterDevicesResponsePrivate class provides private implementation for RegisterDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RegisterDevicesResponsePrivate object with public implementation \a q.
 */
RegisterDevicesResponsePrivate::RegisterDevicesResponsePrivate(
    RegisterDevicesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker RegisterDevices response element from \a xml.
 */
void RegisterDevicesResponsePrivate::parseRegisterDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
