// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "applicationinsightsrequest_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public ApplicationInsightsRequestPrivate {

public:
    DeleteApplicationRequestPrivate(const ApplicationInsightsRequest::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
