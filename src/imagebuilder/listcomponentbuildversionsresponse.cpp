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

#include "listcomponentbuildversionsresponse.h"
#include "listcomponentbuildversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListComponentBuildVersionsResponse
 * \brief The ListComponentBuildVersionsResponse class provides an interace for ImageBuilder ListComponentBuildVersions responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listComponentBuildVersions
 */

/*!
 * Constructs a ListComponentBuildVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListComponentBuildVersionsResponse::ListComponentBuildVersionsResponse(
        const ListComponentBuildVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListComponentBuildVersionsResponsePrivate(this), parent)
{
    setRequest(new ListComponentBuildVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListComponentBuildVersionsRequest * ListComponentBuildVersionsResponse::request() const
{
    Q_D(const ListComponentBuildVersionsResponse);
    return static_cast<const ListComponentBuildVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListComponentBuildVersions \a response.
 */
void ListComponentBuildVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListComponentBuildVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListComponentBuildVersionsResponsePrivate
 * \brief The ListComponentBuildVersionsResponsePrivate class provides private implementation for ListComponentBuildVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListComponentBuildVersionsResponsePrivate object with public implementation \a q.
 */
ListComponentBuildVersionsResponsePrivate::ListComponentBuildVersionsResponsePrivate(
    ListComponentBuildVersionsResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListComponentBuildVersions response element from \a xml.
 */
void ListComponentBuildVersionsResponsePrivate::parseListComponentBuildVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListComponentBuildVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
