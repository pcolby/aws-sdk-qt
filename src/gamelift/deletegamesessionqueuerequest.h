// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESESSIONQUEUEREQUEST_H
#define QTAWS_DELETEGAMESESSIONQUEUEREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameSessionQueueRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteGameSessionQueueRequest : public GameLiftRequest {

public:
    DeleteGameSessionQueueRequest(const DeleteGameSessionQueueRequest &other);
    DeleteGameSessionQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGameSessionQueueRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
