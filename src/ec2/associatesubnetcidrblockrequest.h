// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESUBNETCIDRBLOCKREQUEST_H
#define QTAWS_ASSOCIATESUBNETCIDRBLOCKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateSubnetCidrBlockRequestPrivate;

class QTAWSEC2_EXPORT AssociateSubnetCidrBlockRequest : public Ec2Request {

public:
    AssociateSubnetCidrBlockRequest(const AssociateSubnetCidrBlockRequest &other);
    AssociateSubnetCidrBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateSubnetCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
