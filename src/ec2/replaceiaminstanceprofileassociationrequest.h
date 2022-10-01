// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONREQUEST_H
#define QTAWS_REPLACEIAMINSTANCEPROFILEASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReplaceIamInstanceProfileAssociationRequestPrivate;

class QTAWSEC2_EXPORT ReplaceIamInstanceProfileAssociationRequest : public Ec2Request {

public:
    ReplaceIamInstanceProfileAssociationRequest(const ReplaceIamInstanceProfileAssociationRequest &other);
    ReplaceIamInstanceProfileAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceIamInstanceProfileAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
