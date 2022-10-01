// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTREQUEST_P_H
#define QTAWS_ADDAPPLICATIONINPUTREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationinputrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputRequest;

class AddApplicationInputRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationInputRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationInputRequest * const q);
    AddApplicationInputRequestPrivate(const AddApplicationInputRequestPrivate &other,
                                   AddApplicationInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
