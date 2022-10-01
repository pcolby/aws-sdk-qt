// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSRESPONSE_H
#define QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSRESPONSE_H

#include "ec2response.h"
#include "modifyinstancemaintenanceoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMaintenanceOptionsResponsePrivate;

class QTAWSEC2_EXPORT ModifyInstanceMaintenanceOptionsResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyInstanceMaintenanceOptionsResponse(const ModifyInstanceMaintenanceOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyInstanceMaintenanceOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceMaintenanceOptionsResponse)
    Q_DISABLE_COPY(ModifyInstanceMaintenanceOptionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
