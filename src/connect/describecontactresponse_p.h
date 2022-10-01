// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTRESPONSE_P_H
#define QTAWS_DESCRIBECONTACTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeContactResponse;

class DescribeContactResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeContactResponsePrivate(DescribeContactResponse * const q);

    void parseDescribeContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeContactResponse)
    Q_DISABLE_COPY(DescribeContactResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
