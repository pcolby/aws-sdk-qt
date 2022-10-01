// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONAPPLICATIONREQUEST_H
#define QTAWS_DESCRIBESIMULATIONAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationApplicationRequest : public RoboMakerRequest {

public:
    DescribeSimulationApplicationRequest(const DescribeSimulationApplicationRequest &other);
    DescribeSimulationApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
