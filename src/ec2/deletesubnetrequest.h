// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETREQUEST_H
#define QTAWS_DELETESUBNETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetRequestPrivate;

class QTAWSEC2_EXPORT DeleteSubnetRequest : public Ec2Request {

public:
    DeleteSubnetRequest(const DeleteSubnetRequest &other);
    DeleteSubnetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubnetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
