// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGPATTERNREQUEST_P_H
#define QTAWS_UPDATELOGPATTERNREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "updatelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateLogPatternRequest;

class UpdateLogPatternRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    UpdateLogPatternRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   UpdateLogPatternRequest * const q);
    UpdateLogPatternRequestPrivate(const UpdateLogPatternRequestPrivate &other,
                                   UpdateLogPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
