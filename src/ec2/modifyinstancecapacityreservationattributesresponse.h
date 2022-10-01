// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESRESPONSE_H
#define QTAWS_MODIFYINSTANCECAPACITYRESERVATIONATTRIBUTESRESPONSE_H

#include "ec2response.h"
#include "modifyinstancecapacityreservationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceCapacityReservationAttributesResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceCapacityReservationAttributesResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceCapacityReservationAttributesResponse(const ModifyInstanceCapacityReservationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceCapacityReservationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceCapacityReservationAttributesResponse)
    Q_DISABLE_COPY(ModifyInstanceCapacityReservationAttributesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
