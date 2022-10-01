// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESHARERESPONSE_P_H
#define QTAWS_UPDATERESOURCESHARERESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class UpdateResourceShareResponse;

class UpdateResourceShareResponsePrivate : public RamResponsePrivate {

public:

    explicit UpdateResourceShareResponsePrivate(UpdateResourceShareResponse * const q);

    void parseUpdateResourceShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceShareResponse)
    Q_DISABLE_COPY(UpdateResourceShareResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
