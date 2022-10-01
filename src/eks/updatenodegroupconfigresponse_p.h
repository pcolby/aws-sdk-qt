// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPCONFIGRESPONSE_P_H
#define QTAWS_UPDATENODEGROUPCONFIGRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupConfigResponse;

class UpdateNodegroupConfigResponsePrivate : public EksResponsePrivate {

public:

    explicit UpdateNodegroupConfigResponsePrivate(UpdateNodegroupConfigResponse * const q);

    void parseUpdateNodegroupConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNodegroupConfigResponse)
    Q_DISABLE_COPY(UpdateNodegroupConfigResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
