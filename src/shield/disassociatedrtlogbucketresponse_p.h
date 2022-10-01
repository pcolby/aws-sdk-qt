// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTLOGBUCKETRESPONSE_P_H
#define QTAWS_DISASSOCIATEDRTLOGBUCKETRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTLogBucketResponse;

class DisassociateDRTLogBucketResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DisassociateDRTLogBucketResponsePrivate(DisassociateDRTLogBucketResponse * const q);

    void parseDisassociateDRTLogBucketResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateDRTLogBucketResponse)
    Q_DISABLE_COPY(DisassociateDRTLogBucketResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
