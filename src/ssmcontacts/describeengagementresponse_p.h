// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENGAGEMENTRESPONSE_P_H
#define QTAWS_DESCRIBEENGAGEMENTRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class DescribeEngagementResponse;

class DescribeEngagementResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit DescribeEngagementResponsePrivate(DescribeEngagementResponse * const q);

    void parseDescribeEngagementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEngagementResponse)
    Q_DISABLE_COPY(DescribeEngagementResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
