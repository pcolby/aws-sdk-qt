// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTAGKEYSRESPONSE_P_H
#define QTAWS_GETTAGKEYSRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetTagKeysResponse;

class GetTagKeysResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit GetTagKeysResponsePrivate(GetTagKeysResponse * const q);

    void parseGetTagKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTagKeysResponse)
    Q_DISABLE_COPY(GetTagKeysResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
