// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREBACKUPREQUEST_P_H
#define QTAWS_RESTOREBACKUPREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "restorebackuprequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class RestoreBackupRequest;

class RestoreBackupRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    RestoreBackupRequestPrivate(const CloudHsmV2Request::Action action,
                                   RestoreBackupRequest * const q);
    RestoreBackupRequestPrivate(const RestoreBackupRequestPrivate &other,
                                   RestoreBackupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreBackupRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
