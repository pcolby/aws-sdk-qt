// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBREQUEST_H
#define QTAWS_DESCRIBESIMULATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationJobRequest : public RoboMakerRequest {

public:
    DescribeSimulationJobRequest(const DescribeSimulationJobRequest &other);
    DescribeSimulationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
