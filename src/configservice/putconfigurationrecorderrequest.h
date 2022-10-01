// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONRECORDERREQUEST_H
#define QTAWS_PUTCONFIGURATIONRECORDERREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigurationRecorderRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigurationRecorderRequest : public ConfigServiceRequest {

public:
    PutConfigurationRecorderRequest(const PutConfigurationRecorderRequest &other);
    PutConfigurationRecorderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
