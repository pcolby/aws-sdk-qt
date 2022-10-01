// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicefleetsresponse.h"
#include "listdevicefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDeviceFleetsResponse
 * \brief The ListDeviceFleetsResponse class provides an interace for SageMaker ListDeviceFleets responses.
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
 * \sa SageMakerClient::listDeviceFleets
 */

/*!
 * Constructs a ListDeviceFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceFleetsResponse::ListDeviceFleetsResponse(
        const ListDeviceFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListDeviceFleetsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceFleetsRequest * ListDeviceFleetsResponse::request() const
{
    Q_D(const ListDeviceFleetsResponse);
    return static_cast<const ListDeviceFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListDeviceFleets \a response.
 */
void ListDeviceFleetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListDeviceFleetsResponsePrivate
 * \brief The ListDeviceFleetsResponsePrivate class provides private implementation for ListDeviceFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDeviceFleetsResponsePrivate object with public implementation \a q.
 */
ListDeviceFleetsResponsePrivate::ListDeviceFleetsResponsePrivate(
    ListDeviceFleetsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListDeviceFleets response element from \a xml.
 */
void ListDeviceFleetsResponsePrivate::parseListDeviceFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceFleetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
