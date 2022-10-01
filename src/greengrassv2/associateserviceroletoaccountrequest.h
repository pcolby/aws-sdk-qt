// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class AssociateServiceRoleToAccountRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT AssociateServiceRoleToAccountRequest : public GreengrassV2Request {

public:
    AssociateServiceRoleToAccountRequest(const AssociateServiceRoleToAccountRequest &other);
    AssociateServiceRoleToAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceRoleToAccountRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
