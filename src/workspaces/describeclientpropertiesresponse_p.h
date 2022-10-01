// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTPROPERTIESRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTPROPERTIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientPropertiesResponse;

class DescribeClientPropertiesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeClientPropertiesResponsePrivate(DescribeClientPropertiesResponse * const q);

    void parseDescribeClientPropertiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientPropertiesResponse)
    Q_DISABLE_COPY(DescribeClientPropertiesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
