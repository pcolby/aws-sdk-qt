// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATERESPONSE_P_H
#define QTAWS_DESCRIBEUPDATERESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeUpdateResponse;

class DescribeUpdateResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeUpdateResponsePrivate(DescribeUpdateResponse * const q);

    void parseDescribeUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUpdateResponse)
    Q_DISABLE_COPY(DescribeUpdateResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
