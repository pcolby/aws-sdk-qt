// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationinstancesresponse.h"
#include "listapplicationinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstancesResponse
 * \brief The ListApplicationInstancesResponse class provides an interace for Panorama ListApplicationInstances responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listApplicationInstances
 */

/*!
 * Constructs a ListApplicationInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationInstancesResponse::ListApplicationInstancesResponse(
        const ListApplicationInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListApplicationInstancesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationInstancesRequest * ListApplicationInstancesResponse::request() const
{
    Q_D(const ListApplicationInstancesResponse);
    return static_cast<const ListApplicationInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListApplicationInstances \a response.
 */
void ListApplicationInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListApplicationInstancesResponsePrivate
 * \brief The ListApplicationInstancesResponsePrivate class provides private implementation for ListApplicationInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstancesResponsePrivate object with public implementation \a q.
 */
ListApplicationInstancesResponsePrivate::ListApplicationInstancesResponsePrivate(
    ListApplicationInstancesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListApplicationInstances response element from \a xml.
 */
void ListApplicationInstancesResponsePrivate::parseListApplicationInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
