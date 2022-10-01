// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPREQUEST_P_H
#define QTAWS_UPDATESUBNETGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "updatesubnetgrouprequest.h"

namespace QtAws {
namespace Dax {

class UpdateSubnetGroupRequest;

class UpdateSubnetGroupRequestPrivate : public DaxRequestPrivate {

public:
    UpdateSubnetGroupRequestPrivate(const DaxRequest::Action action,
                                   UpdateSubnetGroupRequest * const q);
    UpdateSubnetGroupRequestPrivate(const UpdateSubnetGroupRequestPrivate &other,
                                   UpdateSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSubnetGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
