// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONQUEUEREQUEST_H
#define QTAWS_UPDATEGAMESESSIONQUEUEREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionQueueRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameSessionQueueRequest : public GameLiftRequest {

public:
    UpdateGameSessionQueueRequest(const UpdateGameSessionQueueRequest &other);
    UpdateGameSessionQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameSessionQueueRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
