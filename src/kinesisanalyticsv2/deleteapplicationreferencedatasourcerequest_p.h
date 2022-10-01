// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREFERENCEDATASOURCEREQUEST_P_H

#include "kinesisanalyticsv2request_p.h"
#include "deleteapplicationreferencedatasourcerequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class DeleteApplicationReferenceDataSourceRequest;

class DeleteApplicationReferenceDataSourceRequestPrivate : public KinesisAnalyticsV2RequestPrivate {

public:
    DeleteApplicationReferenceDataSourceRequestPrivate(const KinesisAnalyticsV2Request::Action action,
                                   DeleteApplicationReferenceDataSourceRequest * const q);
    DeleteApplicationReferenceDataSourceRequestPrivate(const DeleteApplicationReferenceDataSourceRequestPrivate &other,
                                   DeleteApplicationReferenceDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationReferenceDataSourceRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
