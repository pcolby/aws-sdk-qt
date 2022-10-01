// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHITSFORQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_LISTHITSFORQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListHITsForQualificationTypeResponse;

class ListHITsForQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListHITsForQualificationTypeResponsePrivate(ListHITsForQualificationTypeResponse * const q);

    void parseListHITsForQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHITsForQualificationTypeResponse)
    Q_DISABLE_COPY(ListHITsForQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
