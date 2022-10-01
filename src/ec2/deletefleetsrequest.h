// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETSREQUEST_H
#define QTAWS_DELETEFLEETSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteFleetsRequestPrivate;

class QTAWSEC2_EXPORT DeleteFleetsRequest : public Ec2Request {

public:
    DeleteFleetsRequest(const DeleteFleetsRequest &other);
    DeleteFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
