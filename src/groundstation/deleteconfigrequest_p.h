// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGREQUEST_P_H
#define QTAWS_DELETECONFIGREQUEST_P_H

#include "groundstationrequest_p.h"
#include "deleteconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteConfigRequest;

class DeleteConfigRequestPrivate : public GroundStationRequestPrivate {

public:
    DeleteConfigRequestPrivate(const GroundStationRequest::Action action,
                                   DeleteConfigRequest * const q);
    DeleteConfigRequestPrivate(const DeleteConfigRequestPrivate &other,
                                   DeleteConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
