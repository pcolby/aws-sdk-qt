// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMREQUEST_H
#define QTAWS_DELETEROOMREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteRoomRequestPrivate;

class QTAWSCHIME_EXPORT DeleteRoomRequest : public ChimeRequest {

public:
    DeleteRoomRequest(const DeleteRoomRequest &other);
    DeleteRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
