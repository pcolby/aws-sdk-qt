// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportbundleresponse.h"
#include "exportbundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportBundleResponse
 * \brief The ExportBundleResponse class provides an interace for Mobile ExportBundle responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportBundle
 */

/*!
 * Constructs a ExportBundleResponse object for \a reply to \a request, with parent \a parent.
 */
ExportBundleResponse::ExportBundleResponse(
        const ExportBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportBundleResponsePrivate(this), parent)
{
    setRequest(new ExportBundleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportBundleRequest * ExportBundleResponse::request() const
{
    Q_D(const ExportBundleResponse);
    return static_cast<const ExportBundleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile ExportBundle \a response.
 */
void ExportBundleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::ExportBundleResponsePrivate
 * \brief The ExportBundleResponsePrivate class provides private implementation for ExportBundleResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportBundleResponsePrivate object with public implementation \a q.
 */
ExportBundleResponsePrivate::ExportBundleResponsePrivate(
    ExportBundleResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile ExportBundle response element from \a xml.
 */
void ExportBundleResponsePrivate::parseExportBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportBundleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
