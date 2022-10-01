// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONREFERENCEDATASOURCEREQUEST_P_H
#define QTAWS_ADDAPPLICATIONREFERENCEDATASOURCEREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "addapplicationreferencedatasourcerequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationReferenceDataSourceRequest;

class AddApplicationReferenceDataSourceRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    AddApplicationReferenceDataSourceRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   AddApplicationReferenceDataSourceRequest * const q);
    AddApplicationReferenceDataSourceRequestPrivate(const AddApplicationReferenceDataSourceRequestPrivate &other,
                                   AddApplicationReferenceDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddApplicationReferenceDataSourceRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
