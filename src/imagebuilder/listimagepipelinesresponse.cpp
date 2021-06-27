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

#include "listimagepipelinesresponse.h"
#include "listimagepipelinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagePipelinesResponse
 * \brief The ListImagePipelinesResponse class provides an interace for imagebuilder ListImagePipelines responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImagePipelines
 */

/*!
 * Constructs a ListImagePipelinesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePipelinesResponse::ListImagePipelinesResponse(
        const ListImagePipelinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListImagePipelinesResponsePrivate(this), parent)
{
    setRequest(new ListImagePipelinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePipelinesRequest * ListImagePipelinesResponse::request() const
{
    return static_cast<const ListImagePipelinesRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListImagePipelines \a response.
 */
void ListImagePipelinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePipelinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListImagePipelinesResponsePrivate
 * \brief The ListImagePipelinesResponsePrivate class provides private implementation for ListImagePipelinesResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagePipelinesResponsePrivate object with public implementation \a q.
 */
ListImagePipelinesResponsePrivate::ListImagePipelinesResponsePrivate(
    ListImagePipelinesResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListImagePipelines response element from \a xml.
 */
void ListImagePipelinesResponsePrivate::parseListImagePipelinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePipelinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
