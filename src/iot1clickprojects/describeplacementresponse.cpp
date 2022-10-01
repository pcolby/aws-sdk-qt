// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeplacementresponse.h"
#include "describeplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementResponse
 * \brief The DescribePlacementResponse class provides an interace for IoT1ClickProjects DescribePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::describePlacement
 */

/*!
 * Constructs a DescribePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePlacementResponse::DescribePlacementResponse(
        const DescribePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new DescribePlacementResponsePrivate(this), parent)
{
    setRequest(new DescribePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePlacementRequest * DescribePlacementResponse::request() const
{
    Q_D(const DescribePlacementResponse);
    return static_cast<const DescribePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects DescribePlacement \a response.
 */
void DescribePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementResponsePrivate
 * \brief The DescribePlacementResponsePrivate class provides private implementation for DescribePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DescribePlacementResponsePrivate object with public implementation \a q.
 */
DescribePlacementResponsePrivate::DescribePlacementResponsePrivate(
    DescribePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects DescribePlacement response element from \a xml.
 */
void DescribePlacementResponsePrivate::parseDescribePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
