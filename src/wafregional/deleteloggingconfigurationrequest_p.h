// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deleteloggingconfigurationrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteLoggingConfigurationRequest;

class DeleteLoggingConfigurationRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteLoggingConfigurationRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteLoggingConfigurationRequest * const q);
    DeleteLoggingConfigurationRequestPrivate(const DeleteLoggingConfigurationRequestPrivate &other,
                                   DeleteLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoggingConfigurationRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
