// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeAppsResponse;

class DescribeAppsResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeAppsResponsePrivate(DescribeAppsResponse * const q);

    void parseDescribeAppsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppsResponse)
    Q_DISABLE_COPY(DescribeAppsResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
