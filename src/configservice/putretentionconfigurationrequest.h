// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRETENTIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTRETENTIONCONFIGURATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutRetentionConfigurationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRetentionConfigurationRequest : public ConfigServiceRequest {

public:
    PutRetentionConfigurationRequest(const PutRetentionConfigurationRequest &other);
    PutRetentionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRetentionConfigurationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
