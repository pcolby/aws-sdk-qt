// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEERRORSRESPONSE_P_H
#define QTAWS_DESCRIBESERVICEERRORSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeServiceErrorsResponse;

class DescribeServiceErrorsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeServiceErrorsResponsePrivate(DescribeServiceErrorsResponse * const q);

    void parseDescribeServiceErrorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeServiceErrorsResponse)
    Q_DISABLE_COPY(DescribeServiceErrorsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
