// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOPSMETADATARESPONSE_P_H
#define QTAWS_UPDATEOPSMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UpdateOpsMetadataResponse;

class UpdateOpsMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit UpdateOpsMetadataResponsePrivate(UpdateOpsMetadataResponse * const q);

    void parseUpdateOpsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOpsMetadataResponse)
    Q_DISABLE_COPY(UpdateOpsMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
