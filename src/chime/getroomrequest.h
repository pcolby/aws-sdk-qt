// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROOMREQUEST_H
#define QTAWS_GETROOMREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetRoomRequestPrivate;

class QTAWSCHIME_EXPORT GetRoomRequest : public ChimeRequest {

public:
    GetRoomRequest(const GetRoomRequest &other);
    GetRoomRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoomRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
