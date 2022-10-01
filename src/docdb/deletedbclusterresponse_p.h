// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteDBClusterResponse;

class DeleteDBClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteDBClusterResponsePrivate(DeleteDBClusterResponse * const q);

    void parseDeleteDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterResponse)
    Q_DISABLE_COPY(DeleteDBClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
