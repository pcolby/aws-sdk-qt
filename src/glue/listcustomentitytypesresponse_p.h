// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMENTITYTYPESRESPONSE_P_H
#define QTAWS_LISTCUSTOMENTITYTYPESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListCustomEntityTypesResponse;

class ListCustomEntityTypesResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListCustomEntityTypesResponsePrivate(ListCustomEntityTypesResponse * const q);

    void parseListCustomEntityTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCustomEntityTypesResponse)
    Q_DISABLE_COPY(ListCustomEntityTypesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
