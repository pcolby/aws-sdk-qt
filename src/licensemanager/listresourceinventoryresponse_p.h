// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEINVENTORYRESPONSE_P_H
#define QTAWS_LISTRESOURCEINVENTORYRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListResourceInventoryResponse;

class ListResourceInventoryResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListResourceInventoryResponsePrivate(ListResourceInventoryResponse * const q);

    void parseListResourceInventoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceInventoryResponse)
    Q_DISABLE_COPY(ListResourceInventoryResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
