// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDRESERVEDINSTANCESREQUEST_H
#define QTAWS_DELETEQUEUEDRESERVEDINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteQueuedReservedInstancesRequestPrivate;

class QTAWSEC2_EXPORT DeleteQueuedReservedInstancesRequest : public Ec2Request {

public:
    DeleteQueuedReservedInstancesRequest(const DeleteQueuedReservedInstancesRequest &other);
    DeleteQueuedReservedInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueuedReservedInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
