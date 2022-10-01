// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDHCPOPTIONSRESPONSE_P_H
#define QTAWS_DELETEDHCPOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteDhcpOptionsResponse;

class DeleteDhcpOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteDhcpOptionsResponsePrivate(DeleteDhcpOptionsResponse * const q);

    void parseDeleteDhcpOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDhcpOptionsResponse)
    Q_DISABLE_COPY(DeleteDhcpOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
