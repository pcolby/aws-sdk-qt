// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGINEVERSIONSRESPONSE_P_H
#define QTAWS_LISTENGINEVERSIONSRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class ListEngineVersionsResponse;

class ListEngineVersionsResponsePrivate : public M2ResponsePrivate {

public:

    explicit ListEngineVersionsResponsePrivate(ListEngineVersionsResponse * const q);

    void parseListEngineVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEngineVersionsResponse)
    Q_DISABLE_COPY(ListEngineVersionsResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
