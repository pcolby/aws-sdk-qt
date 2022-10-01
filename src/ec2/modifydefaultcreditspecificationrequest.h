// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONREQUEST_H
#define QTAWS_MODIFYDEFAULTCREDITSPECIFICATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyDefaultCreditSpecificationRequestPrivate;

class QTAWSEC2_EXPORT ModifyDefaultCreditSpecificationRequest : public Ec2Request {

public:
    ModifyDefaultCreditSpecificationRequest(const ModifyDefaultCreditSpecificationRequest &other);
    ModifyDefaultCreditSpecificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDefaultCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
