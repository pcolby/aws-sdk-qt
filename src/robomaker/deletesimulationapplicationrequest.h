// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_H
#define QTAWS_DELETESIMULATIONAPPLICATIONREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class DeleteSimulationApplicationRequestPrivate;

class QTAWSROBOMAKER_EXPORT DeleteSimulationApplicationRequest : public RoboMakerRequest {

public:
    DeleteSimulationApplicationRequest(const DeleteSimulationApplicationRequest &other);
    DeleteSimulationApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSimulationApplicationRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
