// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIAMINSTANCEPROFILEREQUEST_H
#define QTAWS_DISASSOCIATEIAMINSTANCEPROFILEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateIamInstanceProfileRequestPrivate;

class QTAWSEC2_EXPORT DisassociateIamInstanceProfileRequest : public Ec2Request {

public:
    DisassociateIamInstanceProfileRequest(const DisassociateIamInstanceProfileRequest &other);
    DisassociateIamInstanceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateIamInstanceProfileRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
