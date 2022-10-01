// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETLOCATIONSREQUEST_H
#define QTAWS_CREATEFLEETLOCATIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateFleetLocationsRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateFleetLocationsRequest : public GameLiftRequest {

public:
    CreateFleetLocationsRequest(const CreateFleetLocationsRequest &other);
    CreateFleetLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetLocationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
