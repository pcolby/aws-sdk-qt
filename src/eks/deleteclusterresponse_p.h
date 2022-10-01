// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLUSTERRESPONSE_P_H
#define QTAWS_DELETECLUSTERRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DeleteClusterResponse;

class DeleteClusterResponsePrivate : public EksResponsePrivate {

public:

    explicit DeleteClusterResponsePrivate(DeleteClusterResponse * const q);

    void parseDeleteClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteClusterResponse)
    Q_DISABLE_COPY(DeleteClusterResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
