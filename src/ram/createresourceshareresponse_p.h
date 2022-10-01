// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESHARERESPONSE_P_H
#define QTAWS_CREATERESOURCESHARERESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class CreateResourceShareResponse;

class CreateResourceShareResponsePrivate : public RamResponsePrivate {

public:

    explicit CreateResourceShareResponsePrivate(CreateResourceShareResponse * const q);

    void parseCreateResourceShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceShareResponse)
    Q_DISABLE_COPY(CreateResourceShareResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
