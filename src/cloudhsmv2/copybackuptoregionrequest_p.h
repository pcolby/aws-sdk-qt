// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPTOREGIONREQUEST_P_H
#define QTAWS_COPYBACKUPTOREGIONREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "copybackuptoregionrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CopyBackupToRegionRequest;

class CopyBackupToRegionRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    CopyBackupToRegionRequestPrivate(const CloudHsmV2Request::Action action,
                                   CopyBackupToRegionRequest * const q);
    CopyBackupToRegionRequestPrivate(const CopyBackupToRegionRequestPrivate &other,
                                   CopyBackupToRegionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyBackupToRegionRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
