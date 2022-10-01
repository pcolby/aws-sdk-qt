// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHARERESPONSE_P_H
#define QTAWS_ASSOCIATERESOURCESHARERESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class AssociateResourceShareResponse;

class AssociateResourceShareResponsePrivate : public RamResponsePrivate {

public:

    explicit AssociateResourceShareResponsePrivate(AssociateResourceShareResponse * const q);

    void parseAssociateResourceShareResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateResourceShareResponse)
    Q_DISABLE_COPY(AssociateResourceShareResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
