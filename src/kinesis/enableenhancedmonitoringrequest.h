// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEENHANCEDMONITORINGREQUEST_H
#define QTAWS_ENABLEENHANCEDMONITORINGREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class EnableEnhancedMonitoringRequestPrivate;

class QTAWSKINESIS_EXPORT EnableEnhancedMonitoringRequest : public KinesisRequest {

public:
    EnableEnhancedMonitoringRequest(const EnableEnhancedMonitoringRequest &other);
    EnableEnhancedMonitoringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableEnhancedMonitoringRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
