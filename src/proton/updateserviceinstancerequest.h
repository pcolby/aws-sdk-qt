// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEINSTANCEREQUEST_H
#define QTAWS_UPDATESERVICEINSTANCEREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class UpdateServiceInstanceRequestPrivate;

class QTAWSPROTON_EXPORT UpdateServiceInstanceRequest : public ProtonRequest {

public:
    UpdateServiceInstanceRequest(const UpdateServiceInstanceRequest &other);
    UpdateServiceInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceInstanceRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
