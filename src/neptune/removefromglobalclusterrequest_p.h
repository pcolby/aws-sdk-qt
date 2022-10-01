// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_P_H
#define QTAWS_REMOVEFROMGLOBALCLUSTERREQUEST_P_H

#include "neptunerequest_p.h"
#include "removefromglobalclusterrequest.h"

namespace QtAws {
namespace Neptune {

class RemoveFromGlobalClusterRequest;

class RemoveFromGlobalClusterRequestPrivate : public NeptuneRequestPrivate {

public:
    RemoveFromGlobalClusterRequestPrivate(const NeptuneRequest::Action action,
                                   RemoveFromGlobalClusterRequest * const q);
    RemoveFromGlobalClusterRequestPrivate(const RemoveFromGlobalClusterRequestPrivate &other,
                                   RemoveFromGlobalClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveFromGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
