// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMRESPONSE_P_H
#define QTAWS_DESCRIBEHSMRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHsmResponse;

class DescribeHsmResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit DescribeHsmResponsePrivate(DescribeHsmResponse * const q);

    void parseDescribeHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHsmResponse)
    Q_DISABLE_COPY(DescribeHsmResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
