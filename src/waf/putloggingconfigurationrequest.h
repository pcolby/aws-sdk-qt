// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class PutLoggingConfigurationRequestPrivate;

class QTAWSWAF_EXPORT PutLoggingConfigurationRequest : public WafRequest {

public:
    PutLoggingConfigurationRequest(const PutLoggingConfigurationRequest &other);
    PutLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingConfigurationRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
