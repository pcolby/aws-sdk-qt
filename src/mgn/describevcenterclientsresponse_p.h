// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVCENTERCLIENTSRESPONSE_P_H
#define QTAWS_DESCRIBEVCENTERCLIENTSRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DescribeVcenterClientsResponse;

class DescribeVcenterClientsResponsePrivate : public MgnResponsePrivate {

public:

    explicit DescribeVcenterClientsResponsePrivate(DescribeVcenterClientsResponse * const q);

    void parseDescribeVcenterClientsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVcenterClientsResponse)
    Q_DISABLE_COPY(DescribeVcenterClientsResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
