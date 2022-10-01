// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONREQUEST_P_H
#define QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONREQUEST_P_H

#include "ec2request_p.h"
#include "replaceiaminstanceprofileassociationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceIamInstanceProfileAssociationRequest;

class ReplaceIamInstanceProfileAssociationRequestPrivate : public Ec2RequestPrivate {

public:
    ReplaceIamInstanceProfileAssociationRequestPrivate(const Ec2Request::Action action,
                                   ReplaceIamInstanceProfileAssociationRequest * const q);
    ReplaceIamInstanceProfileAssociationRequestPrivate(const ReplaceIamInstanceProfileAssociationRequestPrivate &other,
                                   ReplaceIamInstanceProfileAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReplaceIamInstanceProfileAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
