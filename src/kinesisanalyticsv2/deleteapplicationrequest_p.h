// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
