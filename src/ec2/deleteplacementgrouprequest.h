// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTGROUPREQUEST_H
#define QTAWS_DELETEPLACEMENTGROUPREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeletePlacementGroupRequestPrivate;

class QTAWSEC2_EXPORT DeletePlacementGroupRequest : public Ec2Request {

public:
    DeletePlacementGroupRequest(const DeletePlacementGroupRequest &other);
    DeletePlacementGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlacementGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
