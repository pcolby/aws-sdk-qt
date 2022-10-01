// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_GETLOGGINGCONFIGURATIONREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetLoggingConfigurationRequestPrivate;

class QTAWSWAF_EXPORT GetLoggingConfigurationRequest : public WafRequest {

public:
    GetLoggingConfigurationRequest(const GetLoggingConfigurationRequest &other);
    GetLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggingConfigurationRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
