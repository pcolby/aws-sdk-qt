// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPCONFIGREQUEST_P_H
#define QTAWS_UPDATENODEGROUPCONFIGREQUEST_P_H

#include "eksrequest_p.h"
#include "updatenodegroupconfigrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupConfigRequest;

class UpdateNodegroupConfigRequestPrivate : public EksRequestPrivate {

public:
    UpdateNodegroupConfigRequestPrivate(const EksRequest::Action action,
                                   UpdateNodegroupConfigRequest * const q);
    UpdateNodegroupConfigRequestPrivate(const UpdateNodegroupConfigRequestPrivate &other,
                                   UpdateNodegroupConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNodegroupConfigRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
