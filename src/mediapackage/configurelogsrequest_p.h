// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSREQUEST_P_H
#define QTAWS_CONFIGURELOGSREQUEST_P_H

#include "mediapackagerequest_p.h"
#include "configurelogsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ConfigureLogsRequest;

class ConfigureLogsRequestPrivate : public MediaPackageRequestPrivate {

public:
    ConfigureLogsRequestPrivate(const MediaPackageRequest::Action action,
                                   ConfigureLogsRequest * const q);
    ConfigureLogsRequestPrivate(const ConfigureLogsRequestPrivate &other,
                                   ConfigureLogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfigureLogsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
