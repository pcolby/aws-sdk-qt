// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPREQUEST_P_H
#define QTAWS_CREATEGROUPREQUEST_P_H

#include "syntheticsrequest_p.h"
#include "creategrouprequest.h"

namespace QtAws {
namespace Synthetics {

class CreateGroupRequest;

class CreateGroupRequestPrivate : public SyntheticsRequestPrivate {

public:
    CreateGroupRequestPrivate(const SyntheticsRequest::Action action,
                                   CreateGroupRequest * const q);
    CreateGroupRequestPrivate(const CreateGroupRequestPrivate &other,
                                   CreateGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGroupRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
