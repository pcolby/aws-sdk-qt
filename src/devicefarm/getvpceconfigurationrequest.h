// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCECONFIGURATIONREQUEST_H
#define QTAWS_GETVPCECONFIGURATIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetVPCEConfigurationRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetVPCEConfigurationRequest : public DeviceFarmRequest {

public:
    GetVPCEConfigurationRequest(const GetVPCEConfigurationRequest &other);
    GetVPCEConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
