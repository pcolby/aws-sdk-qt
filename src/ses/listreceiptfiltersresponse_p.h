// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECEIPTFILTERSRESPONSE_P_H
#define QTAWS_LISTRECEIPTFILTERSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListReceiptFiltersResponse;

class ListReceiptFiltersResponsePrivate : public SesResponsePrivate {

public:

    explicit ListReceiptFiltersResponsePrivate(ListReceiptFiltersResponse * const q);

    void parseListReceiptFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReceiptFiltersResponse)
    Q_DISABLE_COPY(ListReceiptFiltersResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
