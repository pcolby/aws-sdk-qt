// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIMULATIONJOBBATCHREQUEST_H
#define QTAWS_STARTSIMULATIONJOBBATCHREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class StartSimulationJobBatchRequestPrivate;

class QTAWSROBOMAKER_EXPORT StartSimulationJobBatchRequest : public RoboMakerRequest {

public:
    StartSimulationJobBatchRequest(const StartSimulationJobBatchRequest &other);
    StartSimulationJobBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSimulationJobBatchRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
