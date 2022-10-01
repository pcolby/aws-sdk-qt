// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPVERSIONREQUEST_P_H
#define QTAWS_UPDATENODEGROUPVERSIONREQUEST_P_H

#include "eksrequest_p.h"
#include "updatenodegroupversionrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupVersionRequest;

class UpdateNodegroupVersionRequestPrivate : public EksRequestPrivate {

public:
    UpdateNodegroupVersionRequestPrivate(const EksRequest::Action action,
                                   UpdateNodegroupVersionRequest * const q);
    UpdateNodegroupVersionRequestPrivate(const UpdateNodegroupVersionRequestPrivate &other,
                                   UpdateNodegroupVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateNodegroupVersionRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
