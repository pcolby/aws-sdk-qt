// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMEDQUERYRESPONSE_P_H
#define QTAWS_CREATENAMEDQUERYRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class CreateNamedQueryResponse;

class CreateNamedQueryResponsePrivate : public AthenaResponsePrivate {

public:

    explicit CreateNamedQueryResponsePrivate(CreateNamedQueryResponse * const q);

    void parseCreateNamedQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNamedQueryResponse)
    Q_DISABLE_COPY(CreateNamedQueryResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
