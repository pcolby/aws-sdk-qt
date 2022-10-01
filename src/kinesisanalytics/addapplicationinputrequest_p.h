// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTREQUEST_P_H
#define QTAWS_ADDAPPLICATIONINPUTREQUEST_P_H

#include "kinesisanalyticsrequest_p.h"
#include "addapplicationinputrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputRequest;

class AddApplicationInputRequestPrivate : public KinesisAnalyticsRequestPrivate {

public:
    AddApplicationInputRequestPrivate(const KinesisAnalyticsRequest::Action action,
                                   AddApplicationInputRequest * const q);
    AddApplicationInputRequestPrivate(const AddApplicationInputRequestPrivate &other,
                                   AddApplicationInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
