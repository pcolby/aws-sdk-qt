// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDRESERVEDINSTANCESRESPONSE_H
#define QTAWS_DELETEQUEUEDRESERVEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "deletequeuedreservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteQueuedReservedInstancesResponsePrivate;

class QTAWSEC2_EXPORT DeleteQueuedReservedInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteQueuedReservedInstancesResponse(const DeleteQueuedReservedInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueuedReservedInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueuedReservedInstancesResponse)
    Q_DISABLE_COPY(DeleteQueuedReservedInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
