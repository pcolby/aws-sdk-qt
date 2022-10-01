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
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImportComponentResponse
 * \brief The ImportComponentResponse class provides an interace for ImageBuilder ImportComponent responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::importComponent
 */

/*!
 * Constructs a ImportComponentResponse object for \a reply to \a request, with parent \a parent.
 */
ImportComponentResponse::ImportComponentResponse(
        const ImportComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ImportComponentResponsePrivate(this), parent)
{
    setRequest(new ImportComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportComponentRequest * ImportComponentResponse::request() const
{
    Q_D(const ImportComponentResponse);
    return static_cast<const ImportComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ImportComponent \a response.
 */
void ImportComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ImportComponentResponsePrivate
 * \brief The ImportComponentResponsePrivate class provides private implementation for ImportComponentResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImportComponentResponsePrivate object with public implementation \a q.
 */
ImportComponentResponsePrivate::ImportComponentResponsePrivate(
    ImportComponentResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ImportComponent response element from \a xml.
 */
void ImportComponentResponsePrivate::parseImportComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
