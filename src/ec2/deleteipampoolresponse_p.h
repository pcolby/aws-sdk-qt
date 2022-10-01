// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMPOOLRESPONSE_P_H
#define QTAWS_DELETEIPAMPOOLRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamPoolResponse;

class DeleteIpamPoolResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteIpamPoolResponsePrivate(DeleteIpamPoolResponse * const q);

    void parseDeleteIpamPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIpamPoolResponse)
    Q_DISABLE_COPY(DeleteIpamPoolResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
