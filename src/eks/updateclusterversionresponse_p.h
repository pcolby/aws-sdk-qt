// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERVERSIONRESPONSE_P_H
#define QTAWS_UPDATECLUSTERVERSIONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class UpdateClusterVersionResponse;

class UpdateClusterVersionResponsePrivate : public EksResponsePrivate {

public:

    explicit UpdateClusterVersionResponsePrivate(UpdateClusterVersionResponse * const q);

    void parseUpdateClusterVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateClusterVersionResponse)
    Q_DISABLE_COPY(UpdateClusterVersionResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
