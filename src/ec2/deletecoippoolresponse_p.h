// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOIPPOOLRESPONSE_P_H
#define QTAWS_DELETECOIPPOOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteCoipPoolResponse;

class DeleteCoipPoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteCoipPoolResponsePrivate(DeleteCoipPoolResponse * const q);

    void parseDeleteCoipPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoipPoolResponse)
    Q_DISABLE_COPY(DeleteCoipPoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
