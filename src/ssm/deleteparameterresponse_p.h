// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARAMETERRESPONSE_P_H
#define QTAWS_DELETEPARAMETERRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteParameterResponse;

class DeleteParameterResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteParameterResponsePrivate(DeleteParameterResponse * const q);

    void parseDeleteParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteParameterResponse)
    Q_DISABLE_COPY(DeleteParameterResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
