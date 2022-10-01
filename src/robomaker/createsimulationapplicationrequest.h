// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONREQUEST_H
#define QTAWS_CREATESIMULATIONAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateSimulationApplicationRequest : public RoboMakerRequest {

public:
    CreateSimulationApplicationRequest(const CreateSimulationApplicationRequest &other);
    CreateSimulationApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
