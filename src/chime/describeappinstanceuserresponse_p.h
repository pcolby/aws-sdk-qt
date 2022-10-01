// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERRESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceUserResponse;

class DescribeAppInstanceUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DescribeAppInstanceUserResponsePrivate(DescribeAppInstanceUserResponse * const q);

    void parseDescribeAppInstanceUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeAppInstanceUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
