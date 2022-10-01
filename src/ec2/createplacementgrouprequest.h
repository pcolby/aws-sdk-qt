// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTGROUPREQUEST_H
#define QTAWS_CREATEPLACEMENTGROUPREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreatePlacementGroupRequestPrivate;

class QTAWSEC2_EXPORT CreatePlacementGroupRequest : public Ec2Request {

public:
    CreatePlacementGroupRequest(const CreatePlacementGroupRequest &other);
    CreatePlacementGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlacementGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
