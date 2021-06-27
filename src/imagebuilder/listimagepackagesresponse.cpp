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

#include "listimagepackagesresponse.h"
#include "listimagepackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagePackagesResponse
 * \brief The ListImagePackagesResponse class provides an interace for imagebuilder ListImagePackages responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImagePackages
 */

/*!
 * Constructs a ListImagePackagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePackagesResponse::ListImagePackagesResponse(
        const ListImagePackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ListImagePackagesResponsePrivate(this), parent)
{
    setRequest(new ListImagePackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePackagesRequest * ListImagePackagesResponse::request() const
{
    return static_cast<const ListImagePackagesRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ListImagePackages \a response.
 */
void ListImagePackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ListImagePackagesResponsePrivate
 * \brief The ListImagePackagesResponsePrivate class provides private implementation for ListImagePackagesResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagePackagesResponsePrivate object with public implementation \a q.
 */
ListImagePackagesResponsePrivate::ListImagePackagesResponsePrivate(
    ListImagePackagesResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ListImagePackages response element from \a xml.
 */
void ListImagePackagesResponsePrivate::parseListImagePackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
