// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesresponse.h"
#include "listdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDevicesResponse
 * \brief The ListDevicesResponse class provides an interace for SageMaker ListDevices responses.
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
 * \sa SageMakerClient::listDevices
 */

/*!
 * Constructs a ListDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
ListDevicesResponse::ListDevicesResponse(
        const ListDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListDevicesResponsePrivate(this), parent)
{
    setRequest(new ListDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDevicesRequest * ListDevicesResponse::request() const
{
    Q_D(const ListDevicesResponse);
    return static_cast<const ListDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListDevices \a response.
 */
void ListDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListDevicesResponsePrivate
 * \brief The ListDevicesResponsePrivate class provides private implementation for ListDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDevicesResponsePrivate object with public implementation \a q.
 */
ListDevicesResponsePrivate::ListDevicesResponsePrivate(
    ListDevicesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListDevices response element from \a xml.
 */
void ListDevicesResponsePrivate::parseListDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
