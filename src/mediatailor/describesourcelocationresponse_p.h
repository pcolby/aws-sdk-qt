// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESOURCELOCATIONRESPONSE_P_H
#define QTAWS_DESCRIBESOURCELOCATIONRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class DescribeSourceLocationResponse;

class DescribeSourceLocationResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit DescribeSourceLocationResponsePrivate(DescribeSourceLocationResponse * const q);

    void parseDescribeSourceLocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSourceLocationResponse)
    Q_DISABLE_COPY(DescribeSourceLocationResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
