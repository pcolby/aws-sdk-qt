// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESERVERGROUPSREQUEST_H
#define QTAWS_LISTGAMESERVERGROUPSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ListGameServerGroupsRequestPrivate;

class QTAWSGAMELIFT_EXPORT ListGameServerGroupsRequest : public GameLiftRequest {

public:
    ListGameServerGroupsRequest(const ListGameServerGroupsRequest &other);
    ListGameServerGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGameServerGroupsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
