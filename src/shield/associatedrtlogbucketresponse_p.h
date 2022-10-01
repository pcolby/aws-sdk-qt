// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTLOGBUCKETRESPONSE_P_H
#define QTAWS_ASSOCIATEDRTLOGBUCKETRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class AssociateDRTLogBucketResponse;

class AssociateDRTLogBucketResponsePrivate : public ShieldResponsePrivate {

public:

    explicit AssociateDRTLogBucketResponsePrivate(AssociateDRTLogBucketResponse * const q);

    void parseAssociateDRTLogBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDRTLogBucketResponse)
    Q_DISABLE_COPY(AssociateDRTLogBucketResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
