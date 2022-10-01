// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILTERRESPONSE_P_H
#define QTAWS_DESCRIBEFILTERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeFilterResponse;

class DescribeFilterResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeFilterResponsePrivate(DescribeFilterResponse * const q);

    void parseDescribeFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFilterResponse)
    Q_DISABLE_COPY(DescribeFilterResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
