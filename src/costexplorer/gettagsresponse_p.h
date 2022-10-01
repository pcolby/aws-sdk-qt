// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGSRESPONSE_P_H
#define QTAWS_GETTAGSRESPONSE_P_H

#include "costexplorerresponse_p.h"

namespace QtAws {
namespace CostExplorer {

class GetTagsResponse;

class GetTagsResponsePrivate : public CostExplorerResponsePrivate {

public:

    explicit GetTagsResponsePrivate(GetTagsResponse * const q);

    void parseGetTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTagsResponse)
    Q_DISABLE_COPY(GetTagsResponsePrivate)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
