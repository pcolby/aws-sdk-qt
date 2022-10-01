// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETLOCATIONSREQUEST_H
#define QTAWS_DELETEFLEETLOCATIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteFleetLocationsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteFleetLocationsRequest : public GameLiftRequest {

public:
    DeleteFleetLocationsRequest(const DeleteFleetLocationsRequest &other);
    DeleteFleetLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetLocationsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
