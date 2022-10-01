// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceAdminResponse;

class DescribeAppInstanceAdminResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DescribeAppInstanceAdminResponsePrivate(DescribeAppInstanceAdminResponse * const q);

    void parseDescribeAppInstanceAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceAdminResponse)
    Q_DISABLE_COPY(DescribeAppInstanceAdminResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
