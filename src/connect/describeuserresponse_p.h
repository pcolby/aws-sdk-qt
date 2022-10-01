// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERRESPONSE_P_H
#define QTAWS_DESCRIBEUSERRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeUserResponse;

class DescribeUserResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeUserResponsePrivate(DescribeUserResponse * const q);

    void parseDescribeUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserResponse)
    Q_DISABLE_COPY(DescribeUserResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
