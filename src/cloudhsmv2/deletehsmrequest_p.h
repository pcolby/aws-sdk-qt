// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMREQUEST_P_H
#define QTAWS_DELETEHSMREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "deletehsmrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteHsmRequest;

class DeleteHsmRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    DeleteHsmRequestPrivate(const CloudHsmV2Request::Action action,
                                   DeleteHsmRequest * const q);
    DeleteHsmRequestPrivate(const DeleteHsmRequestPrivate &other,
                                   DeleteHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHsmRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
