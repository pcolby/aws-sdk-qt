// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPCIDRRESPONSE_P_H
#define QTAWS_DELETECOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipCidrResponse;

class DeleteCoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteCoipCidrResponsePrivate(DeleteCoipCidrResponse * const q);

    void parseDeleteCoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoipCidrResponse)
    Q_DISABLE_COPY(DeleteCoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
