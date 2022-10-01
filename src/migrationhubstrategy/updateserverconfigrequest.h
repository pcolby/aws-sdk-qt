// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCONFIGREQUEST_H
#define QTAWS_UPDATESERVERCONFIGREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateServerConfigRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT UpdateServerConfigRequest : public MigrationHubStrategyRequest {

public:
    UpdateServerConfigRequest(const UpdateServerConfigRequest &other);
    UpdateServerConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerConfigRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
