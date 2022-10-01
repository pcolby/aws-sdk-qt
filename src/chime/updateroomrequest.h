// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMREQUEST_H
#define QTAWS_UPDATEROOMREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class UpdateRoomRequestPrivate;

class QTAWSCHIME_EXPORT UpdateRoomRequest : public ChimeRequest {

public:
    UpdateRoomRequest(const UpdateRoomRequest &other);
    UpdateRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
