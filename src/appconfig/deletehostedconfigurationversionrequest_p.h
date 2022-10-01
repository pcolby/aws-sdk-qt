// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONREQUEST_P_H
#define QTAWS_DELETEHOSTEDCONFIGURATIONVERSIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deletehostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteHostedConfigurationVersionRequest;

class DeleteHostedConfigurationVersionRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteHostedConfigurationVersionRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteHostedConfigurationVersionRequest * const q);
    DeleteHostedConfigurationVersionRequestPrivate(const DeleteHostedConfigurationVersionRequestPrivate &other,
                                   DeleteHostedConfigurationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
