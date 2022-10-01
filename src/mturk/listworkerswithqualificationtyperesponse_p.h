// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERSWITHQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_LISTWORKERSWITHQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListWorkersWithQualificationTypeResponse;

class ListWorkersWithQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListWorkersWithQualificationTypeResponsePrivate(ListWorkersWithQualificationTypeResponse * const q);

    void parseListWorkersWithQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListWorkersWithQualificationTypeResponse)
    Q_DISABLE_COPY(ListWorkersWithQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
