// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONSNAPSHOTREQUEST_H
#define QTAWS_CREATEAPPLICATIONSNAPSHOTREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationSnapshotRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT CreateApplicationSnapshotRequest : public KinesisAnalyticsV2Request {

public:
    CreateApplicationSnapshotRequest(const CreateApplicationSnapshotRequest &other);
    CreateApplicationSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationSnapshotRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
