// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTREQUEST_H
#define QTAWS_GETENVIRONMENTREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetEnvironmentRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetEnvironmentRequest : public AppConfigRequest {

public:
    GetEnvironmentRequest(const GetEnvironmentRequest &other);
    GetEnvironmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
