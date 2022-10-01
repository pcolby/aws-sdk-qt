// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETRESOURCETYPESRESPONSE_P_H
#define QTAWS_LISTTARGETRESOURCETYPESRESPONSE_P_H

#include "fisresponse_p.h"

namespace QtAws {
namespace Fis {

class ListTargetResourceTypesResponse;

class ListTargetResourceTypesResponsePrivate : public FisResponsePrivate {

public:

    explicit ListTargetResourceTypesResponsePrivate(ListTargetResourceTypesResponse * const q);

    void parseListTargetResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTargetResourceTypesResponse)
    Q_DISABLE_COPY(ListTargetResourceTypesResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif
