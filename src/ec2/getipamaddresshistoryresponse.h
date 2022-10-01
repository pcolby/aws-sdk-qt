// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMADDRESSHISTORYRESPONSE_H
#define QTAWS_GETIPAMADDRESSHISTORYRESPONSE_H

#include "ec2response.h"
#include "getipamaddresshistoryrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamAddressHistoryResponsePrivate;

class QTAWSEC2_EXPORT GetIpamAddressHistoryResponse : public Ec2Response {
    Q_OBJECT

public:
    GetIpamAddressHistoryResponse(const GetIpamAddressHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIpamAddressHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamAddressHistoryResponse)
    Q_DISABLE_COPY(GetIpamAddressHistoryResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
