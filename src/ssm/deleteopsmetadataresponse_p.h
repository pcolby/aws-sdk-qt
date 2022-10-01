// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPSMETADATARESPONSE_P_H
#define QTAWS_DELETEOPSMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteOpsMetadataResponse;

class DeleteOpsMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteOpsMetadataResponsePrivate(DeleteOpsMetadataResponse * const q);

    void parseDeleteOpsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOpsMetadataResponse)
    Q_DISABLE_COPY(DeleteOpsMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
