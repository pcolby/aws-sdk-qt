// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEADDRESSTOVPCRESPONSE_H
#define QTAWS_MOVEADDRESSTOVPCRESPONSE_H

#include "ec2response.h"
#include "moveaddresstovpcrequest.h"

namespace QtAws {
namespace Ec2 {

class MoveAddressToVpcResponsePrivate;

class QTAWSEC2_EXPORT MoveAddressToVpcResponse : public Ec2Response {
    Q_OBJECT

public:
    MoveAddressToVpcResponse(const MoveAddressToVpcRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MoveAddressToVpcRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveAddressToVpcResponse)
    Q_DISABLE_COPY(MoveAddressToVpcResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
