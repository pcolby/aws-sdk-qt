// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEROOMMEMBERSHIPREQUEST_H
#define QTAWS_BATCHCREATEROOMMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class BatchCreateRoomMembershipRequestPrivate;

class QTAWSCHIME_EXPORT BatchCreateRoomMembershipRequest : public ChimeRequest {

public:
    BatchCreateRoomMembershipRequest(const BatchCreateRoomMembershipRequest &other);
    BatchCreateRoomMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateRoomMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
