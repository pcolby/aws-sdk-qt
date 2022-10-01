// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_UPDATEQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class UpdateQualificationTypeResponse;

class UpdateQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit UpdateQualificationTypeResponsePrivate(UpdateQualificationTypeResponse * const q);

    void parseUpdateQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateQualificationTypeResponse)
    Q_DISABLE_COPY(UpdateQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
