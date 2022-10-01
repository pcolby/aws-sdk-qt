// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACATALOGSRESPONSE_P_H
#define QTAWS_LISTDATACATALOGSRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class ListDataCatalogsResponse;

class ListDataCatalogsResponsePrivate : public AthenaResponsePrivate {

public:

    explicit ListDataCatalogsResponsePrivate(ListDataCatalogsResponse * const q);

    void parseListDataCatalogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDataCatalogsResponse)
    Q_DISABLE_COPY(ListDataCatalogsResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
