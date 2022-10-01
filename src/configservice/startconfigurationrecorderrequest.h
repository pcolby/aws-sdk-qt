// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONRECORDERREQUEST_H
#define QTAWS_STARTCONFIGURATIONRECORDERREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigurationRecorderRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT StartConfigurationRecorderRequest : public ConfigServiceRequest {

public:
    StartConfigurationRecorderRequest(const StartConfigurationRecorderRequest &other);
    StartConfigurationRecorderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
