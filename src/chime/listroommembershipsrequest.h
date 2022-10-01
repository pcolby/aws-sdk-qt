// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMMEMBERSHIPSREQUEST_H
#define QTAWS_LISTROOMMEMBERSHIPSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListRoomMembershipsRequestPrivate;

class QTAWSCHIME_EXPORT ListRoomMembershipsRequest : public ChimeRequest {

public:
    ListRoomMembershipsRequest(const ListRoomMembershipsRequest &other);
    ListRoomMembershipsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoomMembershipsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
