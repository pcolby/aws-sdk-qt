// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONTYPESRESPONSE_P_H
#define QTAWS_LISTQUALIFICATIONTYPESRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListQualificationTypesResponse;

class ListQualificationTypesResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListQualificationTypesResponsePrivate(ListQualificationTypesResponse * const q);

    void parseListQualificationTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQualificationTypesResponse)
    Q_DISABLE_COPY(ListQualificationTypesResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
