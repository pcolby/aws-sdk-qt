// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_DELETEGLOBALCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DeleteGlobalClusterResponse;

class DeleteGlobalClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DeleteGlobalClusterResponsePrivate(DeleteGlobalClusterResponse * const q);

    void parseDeleteGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalClusterResponse)
    Q_DISABLE_COPY(DeleteGlobalClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
