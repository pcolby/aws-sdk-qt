// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_DELETEGLOBALCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteGlobalClusterResponse;

class DeleteGlobalClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteGlobalClusterResponsePrivate(DeleteGlobalClusterResponse * const q);

    void parseDeleteGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalClusterResponse)
    Q_DISABLE_COPY(DeleteGlobalClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
