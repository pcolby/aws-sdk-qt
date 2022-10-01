// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMARESPONSE_P_H
#define QTAWS_CREATESCHEMARESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateSchemaResponse;

class CreateSchemaResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateSchemaResponsePrivate(CreateSchemaResponse * const q);

    void parseCreateSchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSchemaResponse)
    Q_DISABLE_COPY(CreateSchemaResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
