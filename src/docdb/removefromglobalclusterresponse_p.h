// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFROMGLOBALCLUSTERRESPONSE_P_H
#define QTAWS_REMOVEFROMGLOBALCLUSTERRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class RemoveFromGlobalClusterResponse;

class RemoveFromGlobalClusterResponsePrivate : public DocDbResponsePrivate {

public:

    explicit RemoveFromGlobalClusterResponsePrivate(RemoveFromGlobalClusterResponse * const q);

    void parseRemoveFromGlobalClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveFromGlobalClusterResponse)
    Q_DISABLE_COPY(RemoveFromGlobalClusterResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
