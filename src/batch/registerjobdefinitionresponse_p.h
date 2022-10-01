// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERJOBDEFINITIONRESPONSE_P_H
#define QTAWS_REGISTERJOBDEFINITIONRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class RegisterJobDefinitionResponse;

class RegisterJobDefinitionResponsePrivate : public BatchResponsePrivate {

public:

    explicit RegisterJobDefinitionResponsePrivate(RegisterJobDefinitionResponse * const q);

    void parseRegisterJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterJobDefinitionResponse)
    Q_DISABLE_COPY(RegisterJobDefinitionResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
