// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETREQUEST_H
#define QTAWS_CREATEFLEETREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateFleetRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateFleetRequest : public RoboMakerRequest {

public:
    CreateFleetRequest(const CreateFleetRequest &other);
    CreateFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
