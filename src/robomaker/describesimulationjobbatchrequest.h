// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESIMULATIONJOBBATCHREQUEST_H
#define QTAWS_DESCRIBESIMULATIONJOBBATCHREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DescribeSimulationJobBatchRequestPrivate;

class QTAWSROBOMAKER_EXPORT DescribeSimulationJobBatchRequest : public RoboMakerRequest {

public:
    DescribeSimulationJobBatchRequest(const DescribeSimulationJobBatchRequest &other);
    DescribeSimulationJobBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
