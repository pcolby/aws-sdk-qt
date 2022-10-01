// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYBACKUPATTRIBUTESREQUEST_P_H
#define QTAWS_MODIFYBACKUPATTRIBUTESREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "modifybackupattributesrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyBackupAttributesRequest;

class ModifyBackupAttributesRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    ModifyBackupAttributesRequestPrivate(const CloudHsmV2Request::Action action,
                                   ModifyBackupAttributesRequest * const q);
    ModifyBackupAttributesRequestPrivate(const ModifyBackupAttributesRequestPrivate &other,
                                   ModifyBackupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyBackupAttributesRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
