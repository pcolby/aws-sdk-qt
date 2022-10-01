// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBBATCHREQUEST_H
#define QTAWS_CANCELSIMULATIONJOBBATCHREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobBatchRequestPrivate;

class QTAWSROBOMAKER_EXPORT CancelSimulationJobBatchRequest : public RoboMakerRequest {

public:
    CancelSimulationJobBatchRequest(const CancelSimulationJobBatchRequest &other);
    CancelSimulationJobBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
