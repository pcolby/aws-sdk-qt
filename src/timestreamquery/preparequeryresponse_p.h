// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PREPAREQUERYRESPONSE_P_H
#define QTAWS_PREPAREQUERYRESPONSE_P_H

#include "timestreamqueryresponse_p.h"

namespace QtAws {
namespace TimestreamQuery {

class PrepareQueryResponse;

class PrepareQueryResponsePrivate : public TimestreamQueryResponsePrivate {

public:

    explicit PrepareQueryResponsePrivate(PrepareQueryResponse * const q);

    void parsePrepareQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PrepareQueryResponse)
    Q_DISABLE_COPY(PrepareQueryResponsePrivate)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
