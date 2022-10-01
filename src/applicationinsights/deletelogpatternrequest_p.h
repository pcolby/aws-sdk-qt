// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGPATTERNREQUEST_P_H
#define QTAWS_DELETELOGPATTERNREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "deletelogpatternrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteLogPatternRequest;

class DeleteLogPatternRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DeleteLogPatternRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DeleteLogPatternRequest * const q);
    DeleteLogPatternRequestPrivate(const DeleteLogPatternRequestPrivate &other,
                                   DeleteLogPatternRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLogPatternRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
