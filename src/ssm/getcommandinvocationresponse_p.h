// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMANDINVOCATIONRESPONSE_P_H
#define QTAWS_GETCOMMANDINVOCATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetCommandInvocationResponse;

class GetCommandInvocationResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetCommandInvocationResponsePrivate(GetCommandInvocationResponse * const q);

    void parseGetCommandInvocationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCommandInvocationResponse)
    Q_DISABLE_COPY(GetCommandInvocationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
