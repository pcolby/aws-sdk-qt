// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPSMETADATARESPONSE_P_H
#define QTAWS_GETOPSMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetOpsMetadataResponse;

class GetOpsMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetOpsMetadataResponsePrivate(GetOpsMetadataResponse * const q);

    void parseGetOpsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOpsMetadataResponse)
    Q_DISABLE_COPY(GetOpsMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
