// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLRESPONSE_P_H
#define QTAWS_CREATENETWORKACLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclResponse;

class CreateNetworkAclResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNetworkAclResponsePrivate(CreateNetworkAclResponse * const q);

    void parseCreateNetworkAclResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkAclResponse)
    Q_DISABLE_COPY(CreateNetworkAclResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
