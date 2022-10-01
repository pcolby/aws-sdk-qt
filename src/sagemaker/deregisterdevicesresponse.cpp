// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
