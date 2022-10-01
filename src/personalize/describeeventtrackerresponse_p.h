// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTRACKERRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTTRACKERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeEventTrackerResponse;

class DescribeEventTrackerResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeEventTrackerResponsePrivate(DescribeEventTrackerResponse * const q);

    void parseDescribeEventTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventTrackerResponse)
    Q_DISABLE_COPY(DescribeEventTrackerResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
