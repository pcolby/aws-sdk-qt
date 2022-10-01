// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESREQUEST_H
#define QTAWS_UPDATEVIRTUALINTERFACEATTRIBUTESREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateVirtualInterfaceAttributesRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT UpdateVirtualInterfaceAttributesRequest : public DirectConnectRequest {

public:
    UpdateVirtualInterfaceAttributesRequest(const UpdateVirtualInterfaceAttributesRequest &other);
    UpdateVirtualInterfaceAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualInterfaceAttributesRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
