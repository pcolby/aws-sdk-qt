// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBCLUSTERRESPONSE_P_H
#define QTAWS_CREATEDBCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class CreateDBClusterResponse;

class CreateDBClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit CreateDBClusterResponsePrivate(CreateDBClusterResponse * const q);

    void parseCreateDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBClusterResponse)
    Q_DISABLE_COPY(CreateDBClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
