// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLRESPONSE_P_H
#define QTAWS_DELETENETWORKACLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclResponse;

class DeleteNetworkAclResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkAclResponsePrivate(DeleteNetworkAclResponse * const q);

    void parseDeleteNetworkAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkAclResponse)
    Q_DISABLE_COPY(DeleteNetworkAclResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
