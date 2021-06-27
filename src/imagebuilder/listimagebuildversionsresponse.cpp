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

#include "listimagebuildversionsresponse.h"
#include "listimagebuildversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImageBuildVersionsResponse
 * \brief The ListImageBuildVersionsResponse class provides an interace for imagebuilder ListImageBuildVersions responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImageBuildVersions
 */

/*!
 * Constructs a ListImageBuildVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListImageBuildVersionsResponse::ListImageBuildVersionsResponse(
        const ListImageBuildVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListImageBuildVersionsResponsePrivate(this), parent)
{
    setRequest(new ListImageBuildVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImageBuildVersionsRequest * ListImageBuildVersionsResponse::request() const
{
    return static_cast<const ListImageBuildVersionsRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListImageBuildVersions \a response.
 */
void ListImageBuildVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImageBuildVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListImageBuildVersionsResponsePrivate
 * \brief The ListImageBuildVersionsResponsePrivate class provides private implementation for ListImageBuildVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImageBuildVersionsResponsePrivate object with public implementation \a q.
 */
ListImageBuildVersionsResponsePrivate::ListImageBuildVersionsResponsePrivate(
    ListImageBuildVersionsResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListImageBuildVersions response element from \a xml.
 */
void ListImageBuildVersionsResponsePrivate::parseListImageBuildVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImageBuildVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
