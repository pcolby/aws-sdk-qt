// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteLoggingConfigurationRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteLoggingConfigurationRequest : public WafRegionalRequest {

public:
    DeleteLoggingConfigurationRequest(const DeleteLoggingConfigurationRequest &other);
    DeleteLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
