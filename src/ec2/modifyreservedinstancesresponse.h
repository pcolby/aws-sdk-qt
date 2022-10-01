// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRESERVEDINSTANCESRESPONSE_H
#define QTAWS_MODIFYRESERVEDINSTANCESRESPONSE_H

#include "ec2response.h"
#include "modifyreservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyReservedInstancesResponsePrivate;

class QTAWSEC2_EXPORT ModifyReservedInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyReservedInstancesResponse(const ModifyReservedInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReservedInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReservedInstancesResponse)
    Q_DISABLE_COPY(ModifyReservedInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
