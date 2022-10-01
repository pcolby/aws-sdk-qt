// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDONRESPONSE_P_H
#define QTAWS_CREATEADDONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class CreateAddonResponse;

class CreateAddonResponsePrivate : public EksResponsePrivate {

public:

    explicit CreateAddonResponsePrivate(CreateAddonResponse * const q);

    void parseCreateAddonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAddonResponse)
    Q_DISABLE_COPY(CreateAddonResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
