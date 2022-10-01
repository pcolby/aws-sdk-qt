// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTARTSIMULATIONJOBREQUEST_H
#define QTAWS_RESTARTSIMULATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class RestartSimulationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT RestartSimulationJobRequest : public RoboMakerRequest {

public:
    RestartSimulationJobRequest(const RestartSimulationJobRequest &other);
    RestartSimulationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestartSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
