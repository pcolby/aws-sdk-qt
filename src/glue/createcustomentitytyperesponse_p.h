// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMENTITYTYPERESPONSE_P_H
#define QTAWS_CREATECUSTOMENTITYTYPERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateCustomEntityTypeResponse;

class CreateCustomEntityTypeResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateCustomEntityTypeResponsePrivate(CreateCustomEntityTypeResponse * const q);

    void parseCreateCustomEntityTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomEntityTypeResponse)
    Q_DISABLE_COPY(CreateCustomEntityTypeResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
