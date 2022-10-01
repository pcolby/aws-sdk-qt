// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCODEBINDINGRESPONSE_P_H
#define QTAWS_PUTCODEBINDINGRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class PutCodeBindingResponse;

class PutCodeBindingResponsePrivate : public SchemasResponsePrivate {

public:

    explicit PutCodeBindingResponsePrivate(PutCodeBindingResponse * const q);

    void parsePutCodeBindingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutCodeBindingResponse)
    Q_DISABLE_COPY(PutCodeBindingResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
