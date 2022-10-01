// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROBOTRESPONSE_H
#define QTAWS_DESCRIBEROBOTRESPONSE_H

#include "robomakerresponse.h"
#include "describerobotrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeRobotResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeRobotResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeRobotResponse(const DescribeRobotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRobotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRobotResponse)
    Q_DISABLE_COPY(DescribeRobotResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
