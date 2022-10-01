// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_GETQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetQualificationTypeResponse;

class GetQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetQualificationTypeResponsePrivate(GetQualificationTypeResponse * const q);

    void parseGetQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetQualificationTypeResponse)
    Q_DISABLE_COPY(GetQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
