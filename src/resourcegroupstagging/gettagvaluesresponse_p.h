// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGVALUESRESPONSE_P_H
#define QTAWS_GETTAGVALUESRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagValuesResponse;

class GetTagValuesResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit GetTagValuesResponsePrivate(GetTagValuesResponse * const q);

    void parseGetTagValuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTagValuesResponse)
    Q_DISABLE_COPY(GetTagValuesResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
