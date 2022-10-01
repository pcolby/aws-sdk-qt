// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYAPPLICATIONSTATEREQUEST_H
#define QTAWS_NOTIFYAPPLICATIONSTATEREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyApplicationStateRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT NotifyApplicationStateRequest : public MigrationHubRequest {

public:
    NotifyApplicationStateRequest(const NotifyApplicationStateRequest &other);
    NotifyApplicationStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyApplicationStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
