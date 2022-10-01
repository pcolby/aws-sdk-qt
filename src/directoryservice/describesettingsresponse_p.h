// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBESETTINGSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSettingsResponse;

class DescribeSettingsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeSettingsResponsePrivate(DescribeSettingsResponse * const q);

    void parseDescribeSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSettingsResponse)
    Q_DISABLE_COPY(DescribeSettingsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
