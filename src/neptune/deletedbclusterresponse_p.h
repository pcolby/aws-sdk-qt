// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBCLUSTERRESPONSE_P_H
#define QTAWS_DELETEDBCLUSTERRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DeleteDBClusterResponse;

class DeleteDBClusterResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DeleteDBClusterResponsePrivate(DeleteDBClusterResponse * const q);

    void parseDeleteDBClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBClusterResponse)
    Q_DISABLE_COPY(DeleteDBClusterResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
