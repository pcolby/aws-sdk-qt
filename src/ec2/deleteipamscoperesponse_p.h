// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMSCOPERESPONSE_P_H
#define QTAWS_DELETEIPAMSCOPERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamScopeResponse;

class DeleteIpamScopeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteIpamScopeResponsePrivate(DeleteIpamScopeResponse * const q);

    void parseDeleteIpamScopeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIpamScopeResponse)
    Q_DISABLE_COPY(DeleteIpamScopeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
