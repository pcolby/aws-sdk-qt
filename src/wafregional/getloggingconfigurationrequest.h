// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_GETLOGGINGCONFIGURATIONREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetLoggingConfigurationRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetLoggingConfigurationRequest : public WafRegionalRequest {

public:
    GetLoggingConfigurationRequest(const GetLoggingConfigurationRequest &other);
    GetLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
