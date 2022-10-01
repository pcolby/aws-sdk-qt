// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKAPPLICATIONREQUEST_H
#define QTAWS_ROLLBACKAPPLICATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class RollbackApplicationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT RollbackApplicationRequest : public KinesisAnalyticsV2Request {

public:
    RollbackApplicationRequest(const RollbackApplicationRequest &other);
    RollbackApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RollbackApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
