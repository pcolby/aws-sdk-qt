// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKUPREQUEST_P_H
#define QTAWS_DELETEBACKUPREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "deletebackuprequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteBackupRequest;

class DeleteBackupRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    DeleteBackupRequestPrivate(const CloudHsmV2Request::Action action,
                                   DeleteBackupRequest * const q);
    DeleteBackupRequestPrivate(const DeleteBackupRequestPrivate &other,
                                   DeleteBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackupRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
