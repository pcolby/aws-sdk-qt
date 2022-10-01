// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESREQUEST_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterNetworkServicesRequestPrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorFilterNetworkServicesRequest : public Ec2Request {

public:
    ModifyTrafficMirrorFilterNetworkServicesRequest(const ModifyTrafficMirrorFilterNetworkServicesRequest &other);
    ModifyTrafficMirrorFilterNetworkServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorFilterNetworkServicesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
