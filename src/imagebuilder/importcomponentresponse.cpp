// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
