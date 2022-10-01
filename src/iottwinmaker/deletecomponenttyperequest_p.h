// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTTYPEREQUEST_P_H
#define QTAWS_DELETECOMPONENTTYPEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "deletecomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteComponentTypeRequest;

class DeleteComponentTypeRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    DeleteComponentTypeRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   DeleteComponentTypeRequest * const q);
    DeleteComponentTypeRequestPrivate(const DeleteComponentTypeRequestPrivate &other,
                                   DeleteComponentTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
