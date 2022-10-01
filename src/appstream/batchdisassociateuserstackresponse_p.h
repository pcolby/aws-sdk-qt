// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISASSOCIATEUSERSTACKRESPONSE_P_H
#define QTAWS_BATCHDISASSOCIATEUSERSTACKRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class BatchDisassociateUserStackResponse;

class BatchDisassociateUserStackResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit BatchDisassociateUserStackResponsePrivate(BatchDisassociateUserStackResponse * const q);

    void parseBatchDisassociateUserStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDisassociateUserStackResponse)
    Q_DISABLE_COPY(BatchDisassociateUserStackResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
