// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestgridsessionartifactsresponse.h"
#include "listtestgridsessionartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionArtifactsResponse
 * \brief The ListTestGridSessionArtifactsResponse class provides an interace for DeviceFarm ListTestGridSessionArtifacts responses.
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
 * \sa DeviceFarmClient::listTestGridSessionArtifacts
 */

/*!
 * Constructs a ListTestGridSessionArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTestGridSessionArtifactsResponse::ListTestGridSessionArtifactsResponse(
        const ListTestGridSessionArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListTestGridSessionArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListTestGridSessionArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTestGridSessionArtifactsRequest * ListTestGridSessionArtifactsResponse::request() const
{
    Q_D(const ListTestGridSessionArtifactsResponse);
    return static_cast<const ListTestGridSessionArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ListTestGridSessionArtifacts \a response.
 */
void ListTestGridSessionArtifactsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTestGridSessionArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ListTestGridSessionArtifactsResponsePrivate
 * \brief The ListTestGridSessionArtifactsResponsePrivate class provides private implementation for ListTestGridSessionArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestGridSessionArtifactsResponsePrivate object with public implementation \a q.
 */
ListTestGridSessionArtifactsResponsePrivate::ListTestGridSessionArtifactsResponsePrivate(
    ListTestGridSessionArtifactsResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ListTestGridSessionArtifacts response element from \a xml.
 */
void ListTestGridSessionArtifactsResponsePrivate::parseListTestGridSessionArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTestGridSessionArtifactsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
