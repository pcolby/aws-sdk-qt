// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETACTIONSREQUEST_H
#define QTAWS_STARTFLEETACTIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class StartFleetActionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT StartFleetActionsRequest : public GameLiftRequest {

public:
    StartFleetActionsRequest(const StartFleetActionsRequest &other);
    StartFleetActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFleetActionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
