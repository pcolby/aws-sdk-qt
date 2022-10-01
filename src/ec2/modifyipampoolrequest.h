// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMPOOLREQUEST_H
#define QTAWS_MODIFYIPAMPOOLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamPoolRequestPrivate;

class QTAWSEC2_EXPORT ModifyIpamPoolRequest : public Ec2Request {

public:
    ModifyIpamPoolRequest(const ModifyIpamPoolRequest &other);
    ModifyIpamPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
