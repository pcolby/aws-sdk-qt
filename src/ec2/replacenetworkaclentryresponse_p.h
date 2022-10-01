// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLENTRYRESPONSE_P_H
#define QTAWS_REPLACENETWORKACLENTRYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclEntryResponse;

class ReplaceNetworkAclEntryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceNetworkAclEntryResponsePrivate(ReplaceNetworkAclEntryResponse * const q);

    void parseReplaceNetworkAclEntryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceNetworkAclEntryResponse)
    Q_DISABLE_COPY(ReplaceNetworkAclEntryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
