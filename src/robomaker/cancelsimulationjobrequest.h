// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSIMULATIONJOBREQUEST_H
#define QTAWS_CANCELSIMULATIONJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelSimulationJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CancelSimulationJobRequest : public RoboMakerRequest {

public:
    CancelSimulationJobRequest(const CancelSimulationJobRequest &other);
    CancelSimulationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelSimulationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
