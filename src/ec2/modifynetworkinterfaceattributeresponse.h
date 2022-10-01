// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYNETWORKINTERFACEATTRIBUTERESPONSE_H
#define QTAWS_MODIFYNETWORKINTERFACEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "modifynetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyNetworkInterfaceAttributeResponsePrivate;

class QTAWSEC2_EXPORT ModifyNetworkInterfaceAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyNetworkInterfaceAttributeResponse(const ModifyNetworkInterfaceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyNetworkInterfaceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(ModifyNetworkInterfaceAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
