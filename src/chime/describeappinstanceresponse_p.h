// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceResponse;

class DescribeAppInstanceResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DescribeAppInstanceResponsePrivate(DescribeAppInstanceResponse * const q);

    void parseDescribeAppInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceResponse)
    Q_DISABLE_COPY(DescribeAppInstanceResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
