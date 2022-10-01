// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class PutLoggingConfigurationRequestPrivate;

class QTAWSWAFV2_EXPORT PutLoggingConfigurationRequest : public Wafv2Request {

public:
    PutLoggingConfigurationRequest(const PutLoggingConfigurationRequest &other);
    PutLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingConfigurationRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
