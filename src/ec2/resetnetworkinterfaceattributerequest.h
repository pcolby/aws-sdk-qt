// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETNETWORKINTERFACEATTRIBUTEREQUEST_H
#define QTAWS_RESETNETWORKINTERFACEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ResetNetworkInterfaceAttributeRequestPrivate;

class QTAWSEC2_EXPORT ResetNetworkInterfaceAttributeRequest : public Ec2Request {

public:
    ResetNetworkInterfaceAttributeRequest(const ResetNetworkInterfaceAttributeRequest &other);
    ResetNetworkInterfaceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetNetworkInterfaceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
