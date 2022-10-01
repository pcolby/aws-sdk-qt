// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARAMETERRESPONSE_P_H
#define QTAWS_PUTPARAMETERRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class PutParameterResponse;

class PutParameterResponsePrivate : public SsmResponsePrivate {

public:

    explicit PutParameterResponsePrivate(PutParameterResponse * const q);

    void parsePutParameterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutParameterResponse)
    Q_DISABLE_COPY(PutParameterResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
