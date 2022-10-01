// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSMETADATARESPONSE_P_H
#define QTAWS_LISTOPSMETADATARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class ListOpsMetadataResponse;

class ListOpsMetadataResponsePrivate : public SsmResponsePrivate {

public:

    explicit ListOpsMetadataResponsePrivate(ListOpsMetadataResponse * const q);

    void parseListOpsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOpsMetadataResponse)
    Q_DISABLE_COPY(ListOpsMetadataResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
