// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERCONFIGRESPONSE_P_H
#define QTAWS_UPDATECLUSTERCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class UpdateClusterConfigResponse;

class UpdateClusterConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit UpdateClusterConfigResponsePrivate(UpdateClusterConfigResponse * const q);

    void parseUpdateClusterConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterConfigResponse)
    Q_DISABLE_COPY(UpdateClusterConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
