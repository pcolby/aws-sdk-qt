// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSREQUEST_H
#define QTAWS_MODIFYINSTANCEMAINTENANCEOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstanceMaintenanceOptionsRequestPrivate;

class QTAWSEC2_EXPORT ModifyInstanceMaintenanceOptionsRequest : public Ec2Request {

public:
    ModifyInstanceMaintenanceOptionsRequest(const ModifyInstanceMaintenanceOptionsRequest &other);
    ModifyInstanceMaintenanceOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyInstanceMaintenanceOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
