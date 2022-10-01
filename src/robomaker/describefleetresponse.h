// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETRESPONSE_H
#define QTAWS_DESCRIBEFLEETRESPONSE_H

#include "robomakerresponse.h"
#include "describefleetrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeFleetResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeFleetResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeFleetResponse(const DescribeFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetResponse)
    Q_DISABLE_COPY(DescribeFleetResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
