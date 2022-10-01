// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTQUALIFICATIONREQUESTRESPONSE_P_H
#define QTAWS_ACCEPTQUALIFICATIONREQUESTRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class AcceptQualificationRequestResponse;

class AcceptQualificationRequestResponsePrivate : public MTurkResponsePrivate {

public:

    explicit AcceptQualificationRequestResponsePrivate(AcceptQualificationRequestResponse * const q);

    void parseAcceptQualificationRequestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptQualificationRequestResponse)
    Q_DISABLE_COPY(AcceptQualificationRequestResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
