// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecomponentresponse.h"
#include "deletecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteComponentResponse
 * \brief The DeleteComponentResponse class provides an interace for ImageBuilder DeleteComponent responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteComponent
 */

/*!
 * Constructs a DeleteComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComponentResponse::DeleteComponentResponse(
        const DeleteComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new DeleteComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComponentRequest * DeleteComponentResponse::request() const
{
    Q_D(const DeleteComponentResponse);
    return static_cast<const DeleteComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder DeleteComponent \a response.
 */
void DeleteComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::DeleteComponentResponsePrivate
 * \brief The DeleteComponentResponsePrivate class provides private implementation for DeleteComponentResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteComponentResponsePrivate object with public implementation \a q.
 */
DeleteComponentResponsePrivate::DeleteComponentResponsePrivate(
    DeleteComponentResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder DeleteComponent response element from \a xml.
 */
void DeleteComponentResponsePrivate::parseDeleteComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
