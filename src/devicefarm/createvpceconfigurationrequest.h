// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCECONFIGURATIONREQUEST_H
#define QTAWS_CREATEVPCECONFIGURATIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateVPCEConfigurationRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateVPCEConfigurationRequest : public DeviceFarmRequest {

public:
    CreateVPCEConfigurationRequest(const CreateVPCEConfigurationRequest &other);
    CreateVPCEConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
