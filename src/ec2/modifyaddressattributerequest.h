// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYADDRESSATTRIBUTEREQUEST_H
#define QTAWS_MODIFYADDRESSATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyAddressAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyAddressAttributeRequest : public Ec2Request {

public:
    ModifyAddressAttributeRequest(const ModifyAddressAttributeRequest &other);
    ModifyAddressAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyAddressAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
