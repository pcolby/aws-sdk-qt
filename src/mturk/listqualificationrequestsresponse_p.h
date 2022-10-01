// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUALIFICATIONREQUESTSRESPONSE_P_H
#define QTAWS_LISTQUALIFICATIONREQUESTSRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class ListQualificationRequestsResponse;

class ListQualificationRequestsResponsePrivate : public MTurkResponsePrivate {

public:

    explicit ListQualificationRequestsResponsePrivate(ListQualificationRequestsResponse * const q);

    void parseListQualificationRequestsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQualificationRequestsResponse)
    Q_DISABLE_COPY(ListQualificationRequestsResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
