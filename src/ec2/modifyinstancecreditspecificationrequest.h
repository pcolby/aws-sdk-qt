// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECREDITSPECIFICATIONREQUEST_H
#define QTAWS_MODIFYINSTANCECREDITSPECIFICATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCreditSpecificationRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceCreditSpecificationRequest : public Ec2Request {

public:
    ModifyInstanceCreditSpecificationRequest(const ModifyInstanceCreditSpecificationRequest &other);
    ModifyInstanceCreditSpecificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
