// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSITEMRESPONSE_P_H
#define QTAWS_UPDATEOPSITEMRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsItemResponse;

class UpdateOpsItemResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateOpsItemResponsePrivate(UpdateOpsItemResponse * const q);

    void parseUpdateOpsItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOpsItemResponse)
    Q_DISABLE_COPY(UpdateOpsItemResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
