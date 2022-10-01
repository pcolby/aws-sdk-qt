// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONOUTPUTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationOutputRequest;

class DeleteApplicationOutputRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationOutputRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationOutputRequest * const q);
    DeleteApplicationOutputRequestPrivate(const DeleteApplicationOutputRequestPrivate &other,
                                   DeleteApplicationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationOutputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
