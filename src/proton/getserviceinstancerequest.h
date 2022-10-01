// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEINSTANCEREQUEST_H
#define QTAWS_GETSERVICEINSTANCEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class GetServiceInstanceRequestPrivate;

class QTAWSPROTON_EXPORT GetServiceInstanceRequest : public ProtonRequest {

public:
    GetServiceInstanceRequest(const GetServiceInstanceRequest &other);
    GetServiceInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceInstanceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
