// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESERVERGROUPREQUEST_H
#define QTAWS_UPDATEGAMESERVERGROUPREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameServerGroupRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameServerGroupRequest : public GameLiftRequest {

public:
    UpdateGameServerGroupRequest(const UpdateGameServerGroupRequest &other);
    UpdateGameServerGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameServerGroupRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
