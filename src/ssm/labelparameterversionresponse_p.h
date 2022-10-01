// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LABELPARAMETERVERSIONRESPONSE_P_H
#define QTAWS_LABELPARAMETERVERSIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class LabelParameterVersionResponse;

class LabelParameterVersionResponsePrivate : public SsmResponsePrivate {

public:

    explicit LabelParameterVersionResponsePrivate(LabelParameterVersionResponse * const q);

    void parseLabelParameterVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LabelParameterVersionResponse)
    Q_DISABLE_COPY(LabelParameterVersionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
