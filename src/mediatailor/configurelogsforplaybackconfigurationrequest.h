// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONREQUEST_H
#define QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONREQUEST_H

#include "mediatailorrequest.h"

namespace QtAws {
namespace MediaTailor {

class ConfigureLogsForPlaybackConfigurationRequestPrivate;

class QTAWSMEDIATAILOR_EXPORT ConfigureLogsForPlaybackConfigurationRequest : public MediaTailorRequest {

public:
    ConfigureLogsForPlaybackConfigurationRequest(const ConfigureLogsForPlaybackConfigurationRequest &other);
    ConfigureLogsForPlaybackConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureLogsForPlaybackConfigurationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
