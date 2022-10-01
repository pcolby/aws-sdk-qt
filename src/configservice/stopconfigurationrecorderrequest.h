// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCONFIGURATIONRECORDERREQUEST_H
#define QTAWS_STOPCONFIGURATIONRECORDERREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class StopConfigurationRecorderRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT StopConfigurationRecorderRequest : public ConfigServiceRequest {

public:
    StopConfigurationRecorderRequest(const StopConfigurationRecorderRequest &other);
    StopConfigurationRecorderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
