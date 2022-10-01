// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMOUNTTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEMOUNTTARGETSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeMountTargetsResponse;

class DescribeMountTargetsResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeMountTargetsResponsePrivate(DescribeMountTargetsResponse * const q);

    void parseDescribeMountTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMountTargetsResponse)
    Q_DISABLE_COPY(DescribeMountTargetsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
