// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCECONFIGURATIONREQUEST_H
#define QTAWS_UPDATEVPCECONFIGURATIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateVPCEConfigurationRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateVPCEConfigurationRequest : public DeviceFarmRequest {

public:
    UpdateVPCEConfigurationRequest(const UpdateVPCEConfigurationRequest &other);
    UpdateVPCEConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
