// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSITEMRESPONSE_P_H
#define QTAWS_GETOPSITEMRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetOpsItemResponse;

class GetOpsItemResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetOpsItemResponsePrivate(GetOpsItemResponse * const q);

    void parseGetOpsItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpsItemResponse)
    Q_DISABLE_COPY(GetOpsItemResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
