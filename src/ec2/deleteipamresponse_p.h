// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMRESPONSE_P_H
#define QTAWS_DELETEIPAMRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamResponse;

class DeleteIpamResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteIpamResponsePrivate(DeleteIpamResponse * const q);

    void parseDeleteIpamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIpamResponse)
    Q_DISABLE_COPY(DeleteIpamResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
