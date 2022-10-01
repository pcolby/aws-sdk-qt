// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCEEVENTWINDOWREQUEST_H
#define QTAWS_ASSOCIATEINSTANCEEVENTWINDOWREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateInstanceEventWindowRequestPrivate;

class QTAWSEC2_EXPORT AssociateInstanceEventWindowRequest : public Ec2Request {

public:
    AssociateInstanceEventWindowRequest(const AssociateInstanceEventWindowRequest &other);
    AssociateInstanceEventWindowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
