// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDHCPOPTIONSRESPONSE_P_H
#define QTAWS_ASSOCIATEDHCPOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateDhcpOptionsResponse;

class AssociateDhcpOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateDhcpOptionsResponsePrivate(AssociateDhcpOptionsResponse * const q);

    void parseAssociateDhcpOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDhcpOptionsResponse)
    Q_DISABLE_COPY(AssociateDhcpOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
