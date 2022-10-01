// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBREQUEST_P_H
#define QTAWS_DELETEJOBREQUEST_P_H

#include "iotrequest_p.h"
#include "deletejobrequest.h"

namespace QtAws {
namespace IoT {

class DeleteJobRequest;

class DeleteJobRequestPrivate : public IoTRequestPrivate {

public:
    DeleteJobRequestPrivate(const IoTRequest::Action action,
                                   DeleteJobRequest * const q);
    DeleteJobRequestPrivate(const DeleteJobRequestPrivate &other,
                                   DeleteJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
