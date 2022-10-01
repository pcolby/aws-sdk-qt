// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYREQUEST_P_H
#define QTAWS_DELETEENTITYREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "deleteentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteEntityRequest;

class DeleteEntityRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    DeleteEntityRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   DeleteEntityRequest * const q);
    DeleteEntityRequestPrivate(const DeleteEntityRequestPrivate &other,
                                   DeleteEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
