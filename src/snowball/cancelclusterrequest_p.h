// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCLUSTERREQUEST_P_H
#define QTAWS_CANCELCLUSTERREQUEST_P_H

#include "snowballrequest_p.h"
#include "cancelclusterrequest.h"

namespace QtAws {
namespace Snowball {

class CancelClusterRequest;

class CancelClusterRequestPrivate : public SnowballRequestPrivate {

public:
    CancelClusterRequestPrivate(const SnowballRequest::Action action,
                                   CancelClusterRequest * const q);
    CancelClusterRequestPrivate(const CancelClusterRequestPrivate &other,
                                   CancelClusterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelClusterRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
