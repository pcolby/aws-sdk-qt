// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBESIMULATIONJOBREQUEST_H
#define QTAWS_BATCHDESCRIBESIMULATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class BatchDescribeSimulationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT BatchDescribeSimulationJobRequest : public RoboMakerRequest {

public:
    BatchDescribeSimulationJobRequest(const BatchDescribeSimulationJobRequest &other);
    BatchDescribeSimulationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDescribeSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
