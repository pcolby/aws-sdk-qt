// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESQLRESPONSE_P_H
#define QTAWS_EXECUTESQLRESPONSE_P_H

#include "rdsdataresponse_p.h"

namespace QtAws {
namespace RdsData {

class ExecuteSqlResponse;

class ExecuteSqlResponsePrivate : public RdsDataResponsePrivate {

public:

    explicit ExecuteSqlResponsePrivate(ExecuteSqlResponse * const q);

    void parseExecuteSqlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecuteSqlResponse)
    Q_DISABLE_COPY(ExecuteSqlResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
