// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_H
#define QTAWS_STOPAPPLICATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StopApplicationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT StopApplicationRequest : public KinesisAnalyticsV2Request {

public:
    StopApplicationRequest(const StopApplicationRequest &other);
    StopApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
