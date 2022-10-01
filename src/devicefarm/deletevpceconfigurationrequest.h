// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCECONFIGURATIONREQUEST_H
#define QTAWS_DELETEVPCECONFIGURATIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteVPCEConfigurationRequestPrivate;

class QTAWSDEVICEFARM_EXPORT DeleteVPCEConfigurationRequest : public DeviceFarmRequest {

public:
    DeleteVPCEConfigurationRequest(const DeleteVPCEConfigurationRequest &other);
    DeleteVPCEConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVPCEConfigurationRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
