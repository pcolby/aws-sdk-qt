// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAYERSRESPONSE_P_H
#define QTAWS_DESCRIBELAYERSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeLayersResponse;

class DescribeLayersResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeLayersResponsePrivate(DescribeLayersResponse * const q);

    void parseDescribeLayersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLayersResponse)
    Q_DISABLE_COPY(DescribeLayersResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
