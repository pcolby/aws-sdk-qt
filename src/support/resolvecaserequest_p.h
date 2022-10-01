// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVECASEREQUEST_P_H
#define QTAWS_RESOLVECASEREQUEST_P_H

#include "supportrequest_p.h"
#include "resolvecaserequest.h"

namespace QtAws {
namespace Support {

class ResolveCaseRequest;

class ResolveCaseRequestPrivate : public SupportRequestPrivate {

public:
    ResolveCaseRequestPrivate(const SupportRequest::Action action,
                                   ResolveCaseRequest * const q);
    ResolveCaseRequestPrivate(const ResolveCaseRequestPrivate &other,
                                   ResolveCaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResolveCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif
