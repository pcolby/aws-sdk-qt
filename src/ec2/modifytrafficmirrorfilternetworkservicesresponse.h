// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESRESPONSE_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESRESPONSE_H

#include "ec2response.h"
#include "modifytrafficmirrorfilternetworkservicesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterNetworkServicesResponsePrivate;

class QTAWSEC2_EXPORT ModifyTrafficMirrorFilterNetworkServicesResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyTrafficMirrorFilterNetworkServicesResponse(const ModifyTrafficMirrorFilterNetworkServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyTrafficMirrorFilterNetworkServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyTrafficMirrorFilterNetworkServicesResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorFilterNetworkServicesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
