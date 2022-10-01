// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGAMESERVERGROUPREQUEST_H
#define QTAWS_DELETEGAMESERVERGROUPREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteGameServerGroupRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteGameServerGroupRequest : public GameLiftRequest {

public:
    DeleteGameServerGroupRequest(const DeleteGameServerGroupRequest &other);
    DeleteGameServerGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
