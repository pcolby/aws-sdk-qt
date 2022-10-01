// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGREQUEST_H
#define QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateApplicationComponentConfigRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT UpdateApplicationComponentConfigRequest : public MigrationHubStrategyRequest {

public:
    UpdateApplicationComponentConfigRequest(const UpdateApplicationComponentConfigRequest &other);
    UpdateApplicationComponentConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationComponentConfigRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
