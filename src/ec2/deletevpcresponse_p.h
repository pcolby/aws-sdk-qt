// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCRESPONSE_P_H
#define QTAWS_DELETEVPCRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcResponse;

class DeleteVpcResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpcResponsePrivate(DeleteVpcResponse * const q);

    void parseDeleteVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcResponse)
    Q_DISABLE_COPY(DeleteVpcResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
