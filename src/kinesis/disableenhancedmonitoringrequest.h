// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEENHANCEDMONITORINGREQUEST_H
#define QTAWS_DISABLEENHANCEDMONITORINGREQUEST_H

#include "kinesisrequest.h"

namespace QtAws {
namespace Kinesis {

class DisableEnhancedMonitoringRequestPrivate;

class QTAWSKINESIS_EXPORT DisableEnhancedMonitoringRequest : public KinesisRequest {

public:
    DisableEnhancedMonitoringRequest(const DisableEnhancedMonitoringRequest &other);
    DisableEnhancedMonitoringRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableEnhancedMonitoringRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
