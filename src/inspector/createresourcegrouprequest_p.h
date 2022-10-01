// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEGROUPREQUEST_P_H
#define QTAWS_CREATERESOURCEGROUPREQUEST_P_H

#include "inspectorrequest_p.h"
#include "createresourcegrouprequest.h"

namespace QtAws {
namespace Inspector {

class CreateResourceGroupRequest;

class CreateResourceGroupRequestPrivate : public InspectorRequestPrivate {

public:
    CreateResourceGroupRequestPrivate(const InspectorRequest::Action action,
                                   CreateResourceGroupRequest * const q);
    CreateResourceGroupRequestPrivate(const CreateResourceGroupRequestPrivate &other,
                                   CreateResourceGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceGroupRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
