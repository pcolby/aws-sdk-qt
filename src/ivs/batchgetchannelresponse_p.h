// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCHANNELRESPONSE_P_H
#define QTAWS_BATCHGETCHANNELRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class BatchGetChannelResponse;

class BatchGetChannelResponsePrivate : public IvsResponsePrivate {

public:

    explicit BatchGetChannelResponsePrivate(BatchGetChannelResponse * const q);

    void parseBatchGetChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetChannelResponse)
    Q_DISABLE_COPY(BatchGetChannelResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
