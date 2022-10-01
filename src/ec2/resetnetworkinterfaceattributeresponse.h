// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETNETWORKINTERFACEATTRIBUTERESPONSE_H
#define QTAWS_RESETNETWORKINTERFACEATTRIBUTERESPONSE_H

#include "ec2response.h"
#include "resetnetworkinterfaceattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetNetworkInterfaceAttributeResponsePrivate;

class QTAWSEC2_EXPORT ResetNetworkInterfaceAttributeResponse : public Ec2Response {
    Q_OBJECT

public:
    ResetNetworkInterfaceAttributeResponse(const ResetNetworkInterfaceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetNetworkInterfaceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(ResetNetworkInterfaceAttributeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
