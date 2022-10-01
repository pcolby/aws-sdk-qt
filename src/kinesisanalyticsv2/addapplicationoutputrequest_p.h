// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONOUTPUTREQUEST_P_H
#define QTAWS_ADDAPPLICATIONOUTPUTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationoutputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationOutputRequest;

class AddApplicationOutputRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationOutputRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationOutputRequest * const q);
    AddApplicationOutputRequestPrivate(const AddApplicationOutputRequestPrivate &other,
                                   AddApplicationOutputRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationOutputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
