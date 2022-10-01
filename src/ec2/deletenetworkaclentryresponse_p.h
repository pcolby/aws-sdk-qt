// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLENTRYRESPONSE_P_H
#define QTAWS_DELETENETWORKACLENTRYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclEntryResponse;

class DeleteNetworkAclEntryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkAclEntryResponsePrivate(DeleteNetworkAclEntryResponse * const q);

    void parseDeleteNetworkAclEntryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAclEntryResponse)
    Q_DISABLE_COPY(DeleteNetworkAclEntryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
