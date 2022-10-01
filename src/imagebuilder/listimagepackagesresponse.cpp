// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagepackagesresponse.h"
#include "listimagepackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagePackagesResponse
 * \brief The ListImagePackagesResponse class provides an interace for ImageBuilder ListImagePackages responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImagePackages
 */

/*!
 * Constructs a ListImagePackagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagePackagesResponse::ListImagePackagesResponse(
        const ListImagePackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new ListImagePackagesResponsePrivate(this), parent)
{
    setRequest(new ListImagePackagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagePackagesRequest * ListImagePackagesResponse::request() const
{
    Q_D(const ListImagePackagesResponse);
    return static_cast<const ListImagePackagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder ListImagePackages \a response.
 */
void ListImagePackagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagePackagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::ListImagePackagesResponsePrivate
 * \brief The ListImagePackagesResponsePrivate class provides private implementation for ListImagePackagesResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagePackagesResponsePrivate object with public implementation \a q.
 */
ListImagePackagesResponsePrivate::ListImagePackagesResponsePrivate(
    ListImagePackagesResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder ListImagePackages response element from \a xml.
 */
void ListImagePackagesResponsePrivate::parseListImagePackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagePackagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
