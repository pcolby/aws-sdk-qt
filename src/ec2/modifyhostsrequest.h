// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHOSTSREQUEST_H
#define QTAWS_MODIFYHOSTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyHostsRequestPrivate;

class QTAWSEC2_EXPORT ModifyHostsRequest : public Ec2Request {

public:
    ModifyHostsRequest(const ModifyHostsRequest &other);
    ModifyHostsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
