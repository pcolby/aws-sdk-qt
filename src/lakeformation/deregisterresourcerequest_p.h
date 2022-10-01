// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRESOURCEREQUEST_P_H
#define QTAWS_DEREGISTERRESOURCEREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "deregisterresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class DeregisterResourceRequest;

class DeregisterResourceRequestPrivate : public LakeFormationRequestPrivate {

public:
    DeregisterResourceRequestPrivate(const LakeFormationRequest::Action action,
                                   DeregisterResourceRequest * const q);
    DeregisterResourceRequestPrivate(const DeregisterResourceRequestPrivate &other,
                                   DeregisterResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterResourceRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
