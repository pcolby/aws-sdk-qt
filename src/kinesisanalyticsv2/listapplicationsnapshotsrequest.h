// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSNAPSHOTSREQUEST_H
#define QTAWS_LISTAPPLICATIONSNAPSHOTSREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationSnapshotsRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT ListApplicationSnapshotsRequest : public KinesisAnalyticsV2Request {

public:
    ListApplicationSnapshotsRequest(const ListApplicationSnapshotsRequest &other);
    ListApplicationSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationSnapshotsRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
