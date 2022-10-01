// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
