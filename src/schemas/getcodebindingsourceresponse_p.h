// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCODEBINDINGSOURCERESPONSE_P_H
#define QTAWS_GETCODEBINDINGSOURCERESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class GetCodeBindingSourceResponse;

class GetCodeBindingSourceResponsePrivate : public SchemasResponsePrivate {

public:

    explicit GetCodeBindingSourceResponsePrivate(GetCodeBindingSourceResponse * const q);

    void parseGetCodeBindingSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCodeBindingSourceResponse)
    Q_DISABLE_COPY(GetCodeBindingSourceResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
