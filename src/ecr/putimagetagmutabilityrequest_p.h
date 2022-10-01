// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGETAGMUTABILITYREQUEST_P_H
#define QTAWS_PUTIMAGETAGMUTABILITYREQUEST_P_H

#include "ecrrequest_p.h"
#include "putimagetagmutabilityrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageTagMutabilityRequest;

class PutImageTagMutabilityRequestPrivate : public EcrRequestPrivate {

public:
    PutImageTagMutabilityRequestPrivate(const EcrRequest::Action action,
                                   PutImageTagMutabilityRequest * const q);
    PutImageTagMutabilityRequestPrivate(const PutImageTagMutabilityRequestPrivate &other,
                                   PutImageTagMutabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutImageTagMutabilityRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
