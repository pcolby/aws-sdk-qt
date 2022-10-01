// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDPRODUCTSFORIMPORTRESPONSE_P_H
#define QTAWS_LISTENABLEDPRODUCTSFORIMPORTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class ListEnabledProductsForImportResponse;

class ListEnabledProductsForImportResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit ListEnabledProductsForImportResponsePrivate(ListEnabledProductsForImportResponse * const q);

    void parseListEnabledProductsForImportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEnabledProductsForImportResponse)
    Q_DISABLE_COPY(ListEnabledProductsForImportResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
