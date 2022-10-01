// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTATTRIBUTESREQUEST_P_H
#define QTAWS_PUTATTRIBUTESREQUEST_P_H

#include "ecsrequest_p.h"
#include "putattributesrequest.h"

namespace QtAws {
namespace Ecs {

class PutAttributesRequest;

class PutAttributesRequestPrivate : public EcsRequestPrivate {

public:
    PutAttributesRequestPrivate(const EcsRequest::Action action,
                                   PutAttributesRequest * const q);
    PutAttributesRequestPrivate(const PutAttributesRequestPrivate &other,
                                   PutAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAttributesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
