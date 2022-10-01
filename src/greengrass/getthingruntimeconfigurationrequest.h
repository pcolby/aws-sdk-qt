// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGRUNTIMECONFIGURATIONREQUEST_H
#define QTAWS_GETTHINGRUNTIMECONFIGURATIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetThingRuntimeConfigurationRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetThingRuntimeConfigurationRequest : public GreengrassRequest {

public:
    GetThingRuntimeConfigurationRequest(const GetThingRuntimeConfigurationRequest &other);
    GetThingRuntimeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThingRuntimeConfigurationRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
