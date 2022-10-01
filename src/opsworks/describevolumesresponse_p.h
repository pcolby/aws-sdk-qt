// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESRESPONSE_P_H
#define QTAWS_DESCRIBEVOLUMESRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeVolumesResponse;

class DescribeVolumesResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeVolumesResponsePrivate(DescribeVolumesResponse * const q);

    void parseDescribeVolumesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesResponse)
    Q_DISABLE_COPY(DescribeVolumesResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
