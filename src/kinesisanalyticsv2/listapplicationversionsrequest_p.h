// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H
#define QTAWS_LISTAPPLICATIONVERSIONSREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "listapplicationversionsrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationVersionsRequest;

class ListApplicationVersionsRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    ListApplicationVersionsRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   ListApplicationVersionsRequest * const q);
    ListApplicationVersionsRequestPrivate(const ListApplicationVersionsRequestPrivate &other,
                                   ListApplicationVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApplicationVersionsRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
