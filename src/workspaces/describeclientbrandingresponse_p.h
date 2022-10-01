// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTBRANDINGRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTBRANDINGRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeClientBrandingResponse;

class DescribeClientBrandingResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeClientBrandingResponsePrivate(DescribeClientBrandingResponse * const q);

    void parseDescribeClientBrandingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientBrandingResponse)
    Q_DISABLE_COPY(DescribeClientBrandingResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
