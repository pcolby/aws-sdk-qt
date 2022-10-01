// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTLOGGINGCONFIGURATIONREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class PutLoggingConfigurationRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT PutLoggingConfigurationRequest : public WafRegionalRequest {

public:
    PutLoggingConfigurationRequest(const PutLoggingConfigurationRequest &other);
    PutLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
