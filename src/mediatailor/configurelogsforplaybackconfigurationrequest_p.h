// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONREQUEST_P_H
#define QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "configurelogsforplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class ConfigureLogsForPlaybackConfigurationRequest;

class ConfigureLogsForPlaybackConfigurationRequestPrivate : public MediaTailorRequestPrivate {

public:
    ConfigureLogsForPlaybackConfigurationRequestPrivate(const MediaTailorRequest::Action action,
                                   ConfigureLogsForPlaybackConfigurationRequest * const q);
    ConfigureLogsForPlaybackConfigurationRequestPrivate(const ConfigureLogsForPlaybackConfigurationRequestPrivate &other,
                                   ConfigureLogsForPlaybackConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfigureLogsForPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
