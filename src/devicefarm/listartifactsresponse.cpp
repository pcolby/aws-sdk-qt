// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listartifactsresponse.h"
#include "listartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListArtifactsResponse
 * \brief The ListArtifactsResponse class provides an interace for DeviceFarm ListArtifacts responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::listArtifacts
 */

/*!
 * Constructs a ListArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListArtifactsResponse::ListArtifactsResponse(
        const ListArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListArtifactsRequest * ListArtifactsResponse::request() const
{
    Q_D(const ListArtifactsResponse);
    return static_cast<const ListArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListArtifacts \a response.
 */
void ListArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListArtifactsResponsePrivate
 * \brief The ListArtifactsResponsePrivate class provides private implementation for ListArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListArtifactsResponsePrivate object with public implementation \a q.
 */
ListArtifactsResponsePrivate::ListArtifactsResponsePrivate(
    ListArtifactsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListArtifacts response element from \a xml.
 */
void ListArtifactsResponsePrivate::parseListArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
