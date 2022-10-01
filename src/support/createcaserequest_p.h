// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECASEREQUEST_P_H
#define QTAWS_CREATECASEREQUEST_P_H

#include "supportrequest_p.h"
#include "createcaserequest.h"

namespace QtAws {
namespace Support {

class CreateCaseRequest;

class CreateCaseRequestPrivate : public SupportRequestPrivate {

public:
    CreateCaseRequestPrivate(const SupportRequest::Action action,
                                   CreateCaseRequest * const q);
    CreateCaseRequestPrivate(const CreateCaseRequestPrivate &other,
                                   CreateCaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif
