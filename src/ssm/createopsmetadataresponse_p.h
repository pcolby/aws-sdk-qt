// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOPSMETADATARESPONSE_P_H
#define QTAWS_CREATEOPSMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class CreateOpsMetadataResponse;

class CreateOpsMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit CreateOpsMetadataResponsePrivate(CreateOpsMetadataResponse * const q);

    void parseCreateOpsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOpsMetadataResponse)
    Q_DISABLE_COPY(CreateOpsMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
