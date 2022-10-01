// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOMEREGIONREQUEST_H
#define QTAWS_GETHOMEREGIONREQUEST_H

#include "migrationhubconfigrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class GetHomeRegionRequestPrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT GetHomeRegionRequest : public MigrationHubConfigRequest {

public:
    GetHomeRegionRequest(const GetHomeRegionRequest &other);
    GetHomeRegionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHomeRegionRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
