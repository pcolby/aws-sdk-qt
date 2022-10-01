// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMEDQUERYRESPONSE_P_H
#define QTAWS_DELETENAMEDQUERYRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class DeleteNamedQueryResponse;

class DeleteNamedQueryResponsePrivate : public AthenaResponsePrivate {

public:

    explicit DeleteNamedQueryResponsePrivate(DeleteNamedQueryResponse * const q);

    void parseDeleteNamedQueryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNamedQueryResponse)
    Q_DISABLE_COPY(DeleteNamedQueryResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
