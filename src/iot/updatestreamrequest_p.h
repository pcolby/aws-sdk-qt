// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMREQUEST_P_H
#define QTAWS_UPDATESTREAMREQUEST_P_H

#include "iotrequest_p.h"
#include "updatestreamrequest.h"

namespace QtAws {
namespace IoT {

class UpdateStreamRequest;

class UpdateStreamRequestPrivate : public IoTRequestPrivate {

public:
    UpdateStreamRequestPrivate(const IoTRequest::Action action,
                                   UpdateStreamRequest * const q);
    UpdateStreamRequestPrivate(const UpdateStreamRequestPrivate &other,
                                   UpdateStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
