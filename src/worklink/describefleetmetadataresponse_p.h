// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETADATARESPONSE_P_H
#define QTAWS_DESCRIBEFLEETMETADATARESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DescribeFleetMetadataResponse;

class DescribeFleetMetadataResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DescribeFleetMetadataResponsePrivate(DescribeFleetMetadataResponse * const q);

    void parseDescribeFleetMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetMetadataResponse)
    Q_DISABLE_COPY(DescribeFleetMetadataResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
