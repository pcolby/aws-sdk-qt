// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEBYOIPCIDRTOIPAMRESPONSE_H
#define QTAWS_MOVEBYOIPCIDRTOIPAMRESPONSE_H

#include "ec2response.h"
#include "movebyoipcidrtoipamrequest.h"

namespace QtAws {
namespace Ec2 {

class MoveByoipCidrToIpamResponsePrivate;

class QTAWSEC2_EXPORT MoveByoipCidrToIpamResponse : public Ec2Response {
    Q_OBJECT

public:
    MoveByoipCidrToIpamResponse(const MoveByoipCidrToIpamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MoveByoipCidrToIpamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveByoipCidrToIpamResponse)
    Q_DISABLE_COPY(MoveByoipCidrToIpamResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
