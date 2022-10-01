// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETELOGGINGCONFIGURATIONREQUEST_P_H

#include "wafv2request_p.h"
#include "deleteloggingconfigurationrequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteLoggingConfigurationRequest;

class DeleteLoggingConfigurationRequestPrivate : public Wafv2RequestPrivate {

public:
    DeleteLoggingConfigurationRequestPrivate(const Wafv2Request::Action action,
                                   DeleteLoggingConfigurationRequest * const q);
    DeleteLoggingConfigurationRequestPrivate(const DeleteLoggingConfigurationRequestPrivate &other,
                                   DeleteLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoggingConfigurationRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
