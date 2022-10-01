// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACENETWORKACLASSOCIATIONRESPONSE_P_H
#define QTAWS_REPLACENETWORKACLASSOCIATIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ReplaceNetworkAclAssociationResponse;

class ReplaceNetworkAclAssociationResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ReplaceNetworkAclAssociationResponsePrivate(ReplaceNetworkAclAssociationResponse * const q);

    void parseReplaceNetworkAclAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReplaceNetworkAclAssociationResponse)
    Q_DISABLE_COPY(ReplaceNetworkAclAssociationResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
