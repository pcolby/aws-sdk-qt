// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWREQUEST_H
#define QTAWS_DISASSOCIATEINSTANCEEVENTWINDOWREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateInstanceEventWindowRequestPrivate;

class QTAWSEC2_EXPORT DisassociateInstanceEventWindowRequest : public Ec2Request {

public:
    DisassociateInstanceEventWindowRequest(const DisassociateInstanceEventWindowRequest &other);
    DisassociateInstanceEventWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
