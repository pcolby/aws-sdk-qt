// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
