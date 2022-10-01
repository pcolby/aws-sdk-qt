// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERRESPONSE_P_H
#define QTAWS_UPDATECLUSTERRESPONSE_P_H

#include "memorydbresponse_p.h"

namespace QtAws {
namespace MemoryDb {

class UpdateClusterResponse;

class UpdateClusterResponsePrivate : public MemoryDbResponsePrivate {

public:

    explicit UpdateClusterResponsePrivate(UpdateClusterResponse * const q);

    void parseUpdateClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterResponse)
    Q_DISABLE_COPY(UpdateClusterResponsePrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
