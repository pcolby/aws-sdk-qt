// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERJOBDEFINITIONRESPONSE_P_H
#define QTAWS_DEREGISTERJOBDEFINITIONRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DeregisterJobDefinitionResponse;

class DeregisterJobDefinitionResponsePrivate : public BatchResponsePrivate {

public:

    explicit DeregisterJobDefinitionResponsePrivate(DeregisterJobDefinitionResponse * const q);

    void parseDeregisterJobDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterJobDefinitionResponse)
    Q_DISABLE_COPY(DeregisterJobDefinitionResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
