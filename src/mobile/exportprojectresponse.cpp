// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportprojectresponse.h"
#include "exportprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportProjectResponse
 * \brief The ExportProjectResponse class provides an interace for Mobile ExportProject responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportProject
 */

/*!
 * Constructs a ExportProjectResponse object for \a reply to \a request, with parent \a parent.
 */
ExportProjectResponse::ExportProjectResponse(
        const ExportProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportProjectResponsePrivate(this), parent)
{
    setRequest(new ExportProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportProjectRequest * ExportProjectResponse::request() const
{
    Q_D(const ExportProjectResponse);
    return static_cast<const ExportProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile ExportProject \a response.
 */
void ExportProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::ExportProjectResponsePrivate
 * \brief The ExportProjectResponsePrivate class provides private implementation for ExportProjectResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportProjectResponsePrivate object with public implementation \a q.
 */
ExportProjectResponsePrivate::ExportProjectResponsePrivate(
    ExportProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile ExportProject response element from \a xml.
 */
void ExportProjectResponsePrivate::parseExportProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
