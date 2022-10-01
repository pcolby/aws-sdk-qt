// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteEnvironmentRequest;

class DeleteEnvironmentRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteEnvironmentRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteEnvironmentRequest * const q);
    DeleteEnvironmentRequestPrivate(const DeleteEnvironmentRequestPrivate &other,
                                   DeleteEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
