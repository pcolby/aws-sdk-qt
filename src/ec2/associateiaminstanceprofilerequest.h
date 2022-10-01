// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIAMINSTANCEPROFILEREQUEST_H
#define QTAWS_ASSOCIATEIAMINSTANCEPROFILEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateIamInstanceProfileRequestPrivate;

class QTAWSEC2_EXPORT AssociateIamInstanceProfileRequest : public Ec2Request {

public:
    AssociateIamInstanceProfileRequest(const AssociateIamInstanceProfileRequest &other);
    AssociateIamInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIamInstanceProfileRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
