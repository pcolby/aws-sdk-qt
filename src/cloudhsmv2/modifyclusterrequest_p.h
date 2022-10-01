// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERREQUEST_P_H
#define QTAWS_MODIFYCLUSTERREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "modifyclusterrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class ModifyClusterRequest;

class ModifyClusterRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    ModifyClusterRequestPrivate(const CloudHsmV2Request::Action action,
                                   ModifyClusterRequest * const q);
    ModifyClusterRequestPrivate(const ModifyClusterRequestPrivate &other,
                                   ModifyClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
