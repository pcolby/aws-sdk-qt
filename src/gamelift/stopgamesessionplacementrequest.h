// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPGAMESESSIONPLACEMENTREQUEST_H
#define QTAWS_STOPGAMESESSIONPLACEMENTREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class StopGameSessionPlacementRequestPrivate;

class QTAWSGAMELIFT_EXPORT StopGameSessionPlacementRequest : public GameLiftRequest {

public:
    StopGameSessionPlacementRequest(const StopGameSessionPlacementRequest &other);
    StopGameSessionPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
