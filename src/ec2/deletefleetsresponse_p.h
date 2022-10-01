// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETSRESPONSE_P_H
#define QTAWS_DELETEFLEETSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteFleetsResponse;

class DeleteFleetsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteFleetsResponsePrivate(DeleteFleetsResponse * const q);

    void parseDeleteFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFleetsResponse)
    Q_DISABLE_COPY(DeleteFleetsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
