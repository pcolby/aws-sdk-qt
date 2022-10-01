// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "deleteapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class DeleteApplicationOutputRequest;

class DeleteApplicationOutputRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    DeleteApplicationOutputRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   DeleteApplicationOutputRequest * const q);
    DeleteApplicationOutputRequestPrivate(const DeleteApplicationOutputRequestPrivate &other,
                                   DeleteApplicationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationOutputRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
