// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOLUTIONVERSIONREQUEST_P_H
#define QTAWS_DESCRIBESOLUTIONVERSIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "describesolutionversionrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeSolutionVersionRequest;

class DescribeSolutionVersionRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeSolutionVersionRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeSolutionVersionRequest * const q);
    DescribeSolutionVersionRequestPrivate(const DescribeSolutionVersionRequestPrivate &other,
                                   DescribeSolutionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSolutionVersionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
