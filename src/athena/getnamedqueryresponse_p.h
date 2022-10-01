// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMEDQUERYRESPONSE_P_H
#define QTAWS_GETNAMEDQUERYRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetNamedQueryResponse;

class GetNamedQueryResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetNamedQueryResponsePrivate(GetNamedQueryResponse * const q);

    void parseGetNamedQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNamedQueryResponse)
    Q_DISABLE_COPY(GetNamedQueryResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
