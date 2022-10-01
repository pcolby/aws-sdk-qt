// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMEDQUERYRESPONSE_P_H
#define QTAWS_UPDATENAMEDQUERYRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class UpdateNamedQueryResponse;

class UpdateNamedQueryResponsePrivate : public AthenaResponsePrivate {

public:

    explicit UpdateNamedQueryResponsePrivate(UpdateNamedQueryResponse * const q);

    void parseUpdateNamedQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNamedQueryResponse)
    Q_DISABLE_COPY(UpdateNamedQueryResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
