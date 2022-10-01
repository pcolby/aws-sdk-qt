// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTAINSPIIENTITIESREQUEST_P_H
#define QTAWS_CONTAINSPIIENTITIESREQUEST_P_H

#include "comprehendrequest_p.h"
#include "containspiientitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class ContainsPiiEntitiesRequest;

class ContainsPiiEntitiesRequestPrivate : public ComprehendRequestPrivate {

public:
    ContainsPiiEntitiesRequestPrivate(const ComprehendRequest::Action action,
                                   ContainsPiiEntitiesRequest * const q);
    ContainsPiiEntitiesRequestPrivate(const ContainsPiiEntitiesRequestPrivate &other,
                                   ContainsPiiEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ContainsPiiEntitiesRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
