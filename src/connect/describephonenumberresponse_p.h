// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERRESPONSE_P_H
#define QTAWS_DESCRIBEPHONENUMBERRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribePhoneNumberResponse;

class DescribePhoneNumberResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribePhoneNumberResponsePrivate(DescribePhoneNumberResponse * const q);

    void parseDescribePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePhoneNumberResponse)
    Q_DISABLE_COPY(DescribePhoneNumberResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
