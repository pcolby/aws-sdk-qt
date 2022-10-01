// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMREQUEST_P_H
#define QTAWS_DELETESTREAMREQUEST_P_H

#include "iotrequest_p.h"
#include "deletestreamrequest.h"

namespace QtAws {
namespace IoT {

class DeleteStreamRequest;

class DeleteStreamRequestPrivate : public IoTRequestPrivate {

public:
    DeleteStreamRequestPrivate(const IoTRequest::Action action,
                                   DeleteStreamRequest * const q);
    DeleteStreamRequestPrivate(const DeleteStreamRequestPrivate &other,
                                   DeleteStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStreamRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
