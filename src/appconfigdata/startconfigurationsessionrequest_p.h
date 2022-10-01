// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONSESSIONREQUEST_P_H
#define QTAWS_STARTCONFIGURATIONSESSIONREQUEST_P_H

#include "appconfigdatarequest_p.h"
#include "startconfigurationsessionrequest.h"

namespace QtAws {
namespace AppConfigData {

class StartConfigurationSessionRequest;

class StartConfigurationSessionRequestPrivate : public AppConfigDataRequestPrivate {

public:
    StartConfigurationSessionRequestPrivate(const AppConfigDataRequest::Action action,
                                   StartConfigurationSessionRequest * const q);
    StartConfigurationSessionRequestPrivate(const StartConfigurationSessionRequestPrivate &other,
                                   StartConfigurationSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartConfigurationSessionRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
