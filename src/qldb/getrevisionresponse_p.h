// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVISIONRESPONSE_P_H
#define QTAWS_GETREVISIONRESPONSE_P_H

#include "qldbresponse_p.h"

namespace QtAws {
namespace Qldb {

class GetRevisionResponse;

class GetRevisionResponsePrivate : public QldbResponsePrivate {

public:

    explicit GetRevisionResponsePrivate(GetRevisionResponse * const q);

    void parseGetRevisionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRevisionResponse)
    Q_DISABLE_COPY(GetRevisionResponsePrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
