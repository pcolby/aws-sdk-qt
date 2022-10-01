// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerobotresponse.h"
#include "describerobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotResponse
 * \brief The DescribeRobotResponse class provides an interace for RoboMaker DescribeRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobot
 */

/*!
 * Constructs a DescribeRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRobotResponse::DescribeRobotResponse(
        const DescribeRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeRobotResponsePrivate(this), parent)
{
    setRequest(new DescribeRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRobotRequest * DescribeRobotResponse::request() const
{
    Q_D(const DescribeRobotResponse);
    return static_cast<const DescribeRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeRobot \a response.
 */
void DescribeRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotResponsePrivate
 * \brief The DescribeRobotResponsePrivate class provides private implementation for DescribeRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotResponsePrivate object with public implementation \a q.
 */
DescribeRobotResponsePrivate::DescribeRobotResponsePrivate(
    DescribeRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeRobot response element from \a xml.
 */
void DescribeRobotResponsePrivate::parseDescribeRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
