// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONREQUEST_P_H
#define QTAWS_DESCRIBESOLUTIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "describesolutionrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionRequest;

class DescribeSolutionRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeSolutionRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeSolutionRequest * const q);
    DescribeSolutionRequestPrivate(const DescribeSolutionRequestPrivate &other,
                                   DescribeSolutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSolutionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
