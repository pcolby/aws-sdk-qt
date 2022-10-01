// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERSRESPONSE_P_H
#define QTAWS_DELETEPARAMETERSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteParametersResponse;

class DeleteParametersResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteParametersResponsePrivate(DeleteParametersResponse * const q);

    void parseDeleteParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteParametersResponse)
    Q_DISABLE_COPY(DeleteParametersResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
