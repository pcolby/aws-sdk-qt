// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONPROFILESREQUEST_H
#define QTAWS_LISTCONFIGURATIONPROFILESREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class ListConfigurationProfilesRequestPrivate;

class QTAWSAPPCONFIG_EXPORT ListConfigurationProfilesRequest : public AppConfigRequest {

public:
    ListConfigurationProfilesRequest(const ListConfigurationProfilesRequest &other);
    ListConfigurationProfilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationProfilesRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
