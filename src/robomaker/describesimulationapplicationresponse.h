// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONAPPLICATIONRESPONSE_H
#define QTAWS_DESCRIBESIMULATIONAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "describesimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    DescribeSimulationApplicationResponse(const DescribeSimulationApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSimulationApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationApplicationResponse)
    Q_DISABLE_COPY(DescribeSimulationApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
