// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCECONFIGURATIONSREQUEST_H
#define QTAWS_LISTVPCECONFIGURATIONSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListVPCEConfigurationsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListVPCEConfigurationsRequest : public DeviceFarmRequest {

public:
    ListVPCEConfigurationsRequest(const ListVPCEConfigurationsRequest &other);
    ListVPCEConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVPCEConfigurationsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
