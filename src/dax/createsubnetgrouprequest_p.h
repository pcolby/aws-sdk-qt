// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPREQUEST_P_H
#define QTAWS_CREATESUBNETGROUPREQUEST_P_H

#include "daxrequest_p.h"
#include "createsubnetgrouprequest.h"

namespace QtAws {
namespace Dax {

class CreateSubnetGroupRequest;

class CreateSubnetGroupRequestPrivate : public DaxRequestPrivate {

public:
    CreateSubnetGroupRequestPrivate(const DaxRequest::Action action,
                                   CreateSubnetGroupRequest * const q);
    CreateSubnetGroupRequestPrivate(const CreateSubnetGroupRequestPrivate &other,
                                   CreateSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubnetGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
