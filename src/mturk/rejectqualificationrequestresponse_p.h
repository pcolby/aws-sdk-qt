// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTQUALIFICATIONREQUESTRESPONSE_P_H
#define QTAWS_REJECTQUALIFICATIONREQUESTRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class RejectQualificationRequestResponse;

class RejectQualificationRequestResponsePrivate : public MTurkResponsePrivate {

public:

    explicit RejectQualificationRequestResponsePrivate(RejectQualificationRequestResponse * const q);

    void parseRejectQualificationRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectQualificationRequestResponse)
    Q_DISABLE_COPY(RejectQualificationRequestResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
