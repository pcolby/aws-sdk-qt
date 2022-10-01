// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLECOLUMNSRESPONSE_P_H
#define QTAWS_LISTTABLECOLUMNSRESPONSE_P_H

#include "honeycoderesponse_p.h"

namespace QtAws {
namespace Honeycode {

class ListTableColumnsResponse;

class ListTableColumnsResponsePrivate : public HoneycodeResponsePrivate {

public:

    explicit ListTableColumnsResponsePrivate(ListTableColumnsResponse * const q);

    void parseListTableColumnsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTableColumnsResponse)
    Q_DISABLE_COPY(ListTableColumnsResponsePrivate)

};

} // namespace Honeycode
} // namespace QtAws

#endif
