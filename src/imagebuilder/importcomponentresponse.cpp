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

#include "importcomponentresponse.h"
#include "importcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ImportComponentResponse
 * \brief The ImportComponentResponse class provides an interace for imagebuilder ImportComponent responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::importComponent
 */

/*!
 * Constructs a ImportComponentResponse object for \a reply to \a request, with parent \a parent.
 */
ImportComponentResponse::ImportComponentResponse(
        const ImportComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new ImportComponentResponsePrivate(this), parent)
{
    setRequest(new ImportComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportComponentRequest * ImportComponentResponse::request() const
{
    return static_cast<const ImportComponentRequest *>(imagebuilderResponse::request());
}

/*!
 * \reimp
 * Parses a successful imagebuilder ImportComponent \a response.
 */
void ImportComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::ImportComponentResponsePrivate
 * \brief The ImportComponentResponsePrivate class provides private implementation for ImportComponentResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ImportComponentResponsePrivate object with public implementation \a q.
 */
ImportComponentResponsePrivate::ImportComponentResponsePrivate(
    ImportComponentResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder ImportComponent response element from \a xml.
 */
void ImportComponentResponsePrivate::parseImportComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
