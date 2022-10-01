// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONJOBREQUEST_H
#define QTAWS_CREATESIMULATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateSimulationJobRequest : public RoboMakerRequest {

public:
    CreateSimulationJobRequest(const CreateSimulationJobRequest &other);
    CreateSimulationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
