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

#include "importvmimageresponse.h"
#include "importvmimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImportVmImageResponse
 * \brief The ImportVmImageResponse class provides an interace for ImageBuilder ImportVmImage responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::importVmImage
 */

/*!
 * Constructs a ImportVmImageResponse object for \a reply to \a request, with parent \a parent.
 */
ImportVmImageResponse::ImportVmImageResponse(
        const ImportVmImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ImportVmImageResponsePrivate(this), parent)
{
    setRequest(new ImportVmImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportVmImageRequest * ImportVmImageResponse::request() const
{
    Q_D(const ImportVmImageResponse);
    return static_cast<const ImportVmImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ImportVmImage \a response.
 */
void ImportVmImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportVmImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ImportVmImageResponsePrivate
 * \brief The ImportVmImageResponsePrivate class provides private implementation for ImportVmImageResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImportVmImageResponsePrivate object with public implementation \a q.
 */
ImportVmImageResponsePrivate::ImportVmImageResponsePrivate(
    ImportVmImageResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ImportVmImage response element from \a xml.
 */
void ImportVmImageResponsePrivate::parseImportVmImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportVmImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
