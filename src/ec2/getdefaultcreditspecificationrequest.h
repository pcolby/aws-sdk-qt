// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTCREDITSPECIFICATIONREQUEST_H
#define QTAWS_GETDEFAULTCREDITSPECIFICATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetDefaultCreditSpecificationRequestPrivate;

class QTAWSEC2_EXPORT GetDefaultCreditSpecificationRequest : public Ec2Request {

public:
    GetDefaultCreditSpecificationRequest(const GetDefaultCreditSpecificationRequest &other);
    GetDefaultCreditSpecificationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDefaultCreditSpecificationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
