// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMSCOPEREQUEST_H
#define QTAWS_MODIFYIPAMSCOPEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamScopeRequestPrivate;

class QTAWSEC2_EXPORT ModifyIpamScopeRequest : public Ec2Request {

public:
    ModifyIpamScopeRequest(const ModifyIpamScopeRequest &other);
    ModifyIpamScopeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
