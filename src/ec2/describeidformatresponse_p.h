// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDFORMATRESPONSE_P_H
#define QTAWS_DESCRIBEIDFORMATRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeIdFormatResponse;

class DescribeIdFormatResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeIdFormatResponsePrivate(DescribeIdFormatResponse * const q);

    void parseDescribeIdFormatResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdFormatResponse)
    Q_DISABLE_COPY(DescribeIdFormatResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
