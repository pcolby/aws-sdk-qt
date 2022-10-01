// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERRESPONSE_H
#define QTAWS_DESCRIBEPHONENUMBERRESPONSE_H

#include "connectresponse.h"
#include "describephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class DescribePhoneNumberResponsePrivate;

class QTAWSCONNECT_EXPORT DescribePhoneNumberResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribePhoneNumberResponse(const DescribePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePhoneNumberResponse)
    Q_DISABLE_COPY(DescribePhoneNumberResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
