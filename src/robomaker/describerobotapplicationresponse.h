// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTAPPLICATIONRESPONSE_H
#define QTAWS_DESCRIBEROBOTAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "describerobotapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeRobotApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeRobotApplicationResponse(const DescribeRobotApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRobotApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRobotApplicationResponse)
    Q_DISABLE_COPY(DescribeRobotApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
