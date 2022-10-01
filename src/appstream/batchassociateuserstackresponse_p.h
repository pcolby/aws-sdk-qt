// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHASSOCIATEUSERSTACKRESPONSE_P_H
#define QTAWS_BATCHASSOCIATEUSERSTACKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class BatchAssociateUserStackResponse;

class BatchAssociateUserStackResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit BatchAssociateUserStackResponsePrivate(BatchAssociateUserStackResponse * const q);

    void parseBatchAssociateUserStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchAssociateUserStackResponse)
    Q_DISABLE_COPY(BatchAssociateUserStackResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
