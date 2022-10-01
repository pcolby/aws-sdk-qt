// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGEDBLOCKSRESPONSE_P_H
#define QTAWS_LISTCHANGEDBLOCKSRESPONSE_P_H

#include "ebsresponse_p.h"

namespace QtAws {
namespace Ebs {

class ListChangedBlocksResponse;

class ListChangedBlocksResponsePrivate : public EbsResponsePrivate {

public:

    explicit ListChangedBlocksResponsePrivate(ListChangedBlocksResponse * const q);

    void parseListChangedBlocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListChangedBlocksResponse)
    Q_DISABLE_COPY(ListChangedBlocksResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
