// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNLABELPARAMETERVERSIONRESPONSE_P_H
#define QTAWS_UNLABELPARAMETERVERSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class UnlabelParameterVersionResponse;

class UnlabelParameterVersionResponsePrivate : public SsmResponsePrivate {

public:

    explicit UnlabelParameterVersionResponsePrivate(UnlabelParameterVersionResponse * const q);

    void parseUnlabelParameterVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnlabelParameterVersionResponse)
    Q_DISABLE_COPY(UnlabelParameterVersionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
