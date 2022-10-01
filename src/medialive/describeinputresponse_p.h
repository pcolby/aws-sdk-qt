// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTRESPONSE_P_H
#define QTAWS_DESCRIBEINPUTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputResponse;

class DescribeInputResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit DescribeInputResponsePrivate(DescribeInputResponse * const q);

    void parseDescribeInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInputResponse)
    Q_DISABLE_COPY(DescribeInputResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
