// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECIPEREQUEST_P_H
#define QTAWS_DESCRIBERECIPEREQUEST_P_H

#include "personalizerequest_p.h"
#include "describereciperequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecipeRequest;

class DescribeRecipeRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeRecipeRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeRecipeRequest * const q);
    DescribeRecipeRequestPrivate(const DescribeRecipeRequestPrivate &other,
                                   DescribeRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecipeRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
