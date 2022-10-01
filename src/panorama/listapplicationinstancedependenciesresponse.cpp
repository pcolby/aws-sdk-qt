// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationinstancedependenciesresponse.h"
#include "listapplicationinstancedependenciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstanceDependenciesResponse
 * \brief The ListApplicationInstanceDependenciesResponse class provides an interace for Panorama ListApplicationInstanceDependencies responses.
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
 * \sa PanoramaClient::listApplicationInstanceDependencies
 */

/*!
 * Constructs a ListApplicationInstanceDependenciesResponse object for \a reply to \a request, with parent \a parent.
 */
ListApplicationInstanceDependenciesResponse::ListApplicationInstanceDependenciesResponse(
        const ListApplicationInstanceDependenciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new ListApplicationInstanceDependenciesResponsePrivate(this), parent)
{
    setRequest(new ListApplicationInstanceDependenciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApplicationInstanceDependenciesRequest * ListApplicationInstanceDependenciesResponse::request() const
{
    Q_D(const ListApplicationInstanceDependenciesResponse);
    return static_cast<const ListApplicationInstanceDependenciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama ListApplicationInstanceDependencies \a response.
 */
void ListApplicationInstanceDependenciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListApplicationInstanceDependenciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::ListApplicationInstanceDependenciesResponsePrivate
 * \brief The ListApplicationInstanceDependenciesResponsePrivate class provides private implementation for ListApplicationInstanceDependenciesResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstanceDependenciesResponsePrivate object with public implementation \a q.
 */
ListApplicationInstanceDependenciesResponsePrivate::ListApplicationInstanceDependenciesResponsePrivate(
    ListApplicationInstanceDependenciesResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama ListApplicationInstanceDependencies response element from \a xml.
 */
void ListApplicationInstanceDependenciesResponsePrivate::parseListApplicationInstanceDependenciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApplicationInstanceDependenciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
