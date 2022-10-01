// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHAREASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETRESOURCESHAREASSOCIATIONSRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class GetResourceShareAssociationsResponse;

class GetResourceShareAssociationsResponsePrivate : public RamResponsePrivate {

public:

    explicit GetResourceShareAssociationsResponsePrivate(GetResourceShareAssociationsResponse * const q);

    void parseGetResourceShareAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceShareAssociationsResponse)
    Q_DISABLE_COPY(GetResourceShareAssociationsResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
