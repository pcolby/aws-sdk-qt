// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "updateconfigurationsetsendingenabledrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetSendingEnabledRequest;

class UpdateConfigurationSetSendingEnabledRequestPrivate : public SesRequestPrivate {

public:
    UpdateConfigurationSetSendingEnabledRequestPrivate(const SesRequest::Action action,
                                   UpdateConfigurationSetSendingEnabledRequest * const q);
    UpdateConfigurationSetSendingEnabledRequestPrivate(const UpdateConfigurationSetSendingEnabledRequestPrivate &other,
                                   UpdateConfigurationSetSendingEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetSendingEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
