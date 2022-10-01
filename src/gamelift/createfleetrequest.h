// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETREQUEST_H
#define QTAWS_CREATEFLEETREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateFleetRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateFleetRequest : public GameLiftRequest {

public:
    CreateFleetRequest(const CreateFleetRequest &other);
    CreateFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
