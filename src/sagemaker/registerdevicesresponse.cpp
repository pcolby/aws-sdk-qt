// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
