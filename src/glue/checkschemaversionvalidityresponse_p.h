// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKSCHEMAVERSIONVALIDITYRESPONSE_P_H
#define QTAWS_CHECKSCHEMAVERSIONVALIDITYRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CheckSchemaVersionValidityResponse;

class CheckSchemaVersionValidityResponsePrivate : public GlueResponsePrivate {

public:

    explicit CheckSchemaVersionValidityResponsePrivate(CheckSchemaVersionValidityResponse * const q);

    void parseCheckSchemaVersionValidityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckSchemaVersionValidityResponse)
    Q_DISABLE_COPY(CheckSchemaVersionValidityResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
