// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerobotapplicationresponse.h"
#include "describerobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationResponse
 * \brief The DescribeRobotApplicationResponse class provides an interace for RoboMaker DescribeRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeRobotApplication
 */

/*!
 * Constructs a DescribeRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRobotApplicationResponse::DescribeRobotApplicationResponse(
        const DescribeRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRobotApplicationRequest * DescribeRobotApplicationResponse::request() const
{
    Q_D(const DescribeRobotApplicationResponse);
    return static_cast<const DescribeRobotApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeRobotApplication \a response.
 */
void DescribeRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeRobotApplicationResponsePrivate
 * \brief The DescribeRobotApplicationResponsePrivate class provides private implementation for DescribeRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeRobotApplicationResponsePrivate object with public implementation \a q.
 */
DescribeRobotApplicationResponsePrivate::DescribeRobotApplicationResponsePrivate(
    DescribeRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeRobotApplication response element from \a xml.
 */
void DescribeRobotApplicationResponsePrivate::parseDescribeRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
