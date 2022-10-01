// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEGROUPSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeGroupsResponse;

class DescribeGroupsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeGroupsResponsePrivate(DescribeGroupsResponse * const q);

    void parseDescribeGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGroupsResponse)
    Q_DISABLE_COPY(DescribeGroupsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
