// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMREQUEST_H
#define QTAWS_CREATEROOMREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class CreateRoomRequestPrivate;

class QTAWSCHIME_EXPORT CreateRoomRequest : public ChimeRequest {

public:
    CreateRoomRequest(const CreateRoomRequest &other);
    CreateRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
