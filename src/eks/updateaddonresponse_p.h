// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDONRESPONSE_P_H
#define QTAWS_UPDATEADDONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class UpdateAddonResponse;

class UpdateAddonResponsePrivate : public EksResponsePrivate {

public:

    explicit UpdateAddonResponsePrivate(UpdateAddonResponse * const q);

    void parseUpdateAddonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAddonResponse)
    Q_DISABLE_COPY(UpdateAddonResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
