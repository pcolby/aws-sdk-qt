// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRRESPONSE_H
#define QTAWS_ADVERTISEBYOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "advertisebyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class AdvertiseByoipCidrResponsePrivate;

class QTAWSEC2_EXPORT AdvertiseByoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    AdvertiseByoipCidrResponse(const AdvertiseByoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdvertiseByoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdvertiseByoipCidrResponse)
    Q_DISABLE_COPY(AdvertiseByoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
