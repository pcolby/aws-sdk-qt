// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXPIRATIONFORHITRESPONSE_P_H
#define QTAWS_UPDATEEXPIRATIONFORHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class UpdateExpirationForHITResponse;

class UpdateExpirationForHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit UpdateExpirationForHITResponsePrivate(UpdateExpirationForHITResponse * const q);

    void parseUpdateExpirationForHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateExpirationForHITResponse)
    Q_DISABLE_COPY(UpdateExpirationForHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
