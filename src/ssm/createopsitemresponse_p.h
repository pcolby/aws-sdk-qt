// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSITEMRESPONSE_P_H
#define QTAWS_CREATEOPSITEMRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateOpsItemResponse;

class CreateOpsItemResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateOpsItemResponsePrivate(CreateOpsItemResponse * const q);

    void parseCreateOpsItemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOpsItemResponse)
    Q_DISABLE_COPY(CreateOpsItemResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
