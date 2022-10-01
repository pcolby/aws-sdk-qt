// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUALIFICATIONTYPERESPONSE_P_H
#define QTAWS_CREATEQUALIFICATIONTYPERESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class CreateQualificationTypeResponse;

class CreateQualificationTypeResponsePrivate : public MTurkResponsePrivate {

public:

    explicit CreateQualificationTypeResponsePrivate(CreateQualificationTypeResponse * const q);

    void parseCreateQualificationTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateQualificationTypeResponse)
    Q_DISABLE_COPY(CreateQualificationTypeResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
