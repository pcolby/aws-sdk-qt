// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRREQUEST_H
#define QTAWS_PROVISIONBYOIPCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ProvisionByoipCidrRequestPrivate;

class QTAWSEC2_EXPORT ProvisionByoipCidrRequest : public Ec2Request {

public:
    ProvisionByoipCidrRequest(const ProvisionByoipCidrRequest &other);
    ProvisionByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
