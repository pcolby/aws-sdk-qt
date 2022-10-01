// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETACTIONSREQUEST_H
#define QTAWS_STOPFLEETACTIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class StopFleetActionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT StopFleetActionsRequest : public GameLiftRequest {

public:
    StopFleetActionsRequest(const StopFleetActionsRequest &other);
    StopFleetActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFleetActionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
