// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGPATTERNREQUEST_P_H
#define QTAWS_CREATELOGPATTERNREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "createlogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class CreateLogPatternRequest;

class CreateLogPatternRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    CreateLogPatternRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   CreateLogPatternRequest * const q);
    CreateLogPatternRequestPrivate(const CreateLogPatternRequestPrivate &other,
                                   CreateLogPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
