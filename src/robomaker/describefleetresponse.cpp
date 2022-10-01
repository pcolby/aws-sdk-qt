// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefleetresponse.h"
#include "describefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeFleetResponse
 * \brief The DescribeFleetResponse class provides an interace for RoboMaker DescribeFleet responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeFleet
 */

/*!
 * Constructs a DescribeFleetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetResponse::DescribeFleetResponse(
        const DescribeFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeFleetResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetRequest * DescribeFleetResponse::request() const
{
    Q_D(const DescribeFleetResponse);
    return static_cast<const DescribeFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeFleet \a response.
 */
void DescribeFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeFleetResponsePrivate
 * \brief The DescribeFleetResponsePrivate class provides private implementation for DescribeFleetResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeFleetResponsePrivate object with public implementation \a q.
 */
DescribeFleetResponsePrivate::DescribeFleetResponsePrivate(
    DescribeFleetResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeFleet response element from \a xml.
 */
void DescribeFleetResponsePrivate::parseDescribeFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
