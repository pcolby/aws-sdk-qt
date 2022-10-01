// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERRESPONSE_P_H
#define QTAWS_ASSOCIATEQUALIFICATIONWITHWORKERRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class AssociateQualificationWithWorkerResponse;

class AssociateQualificationWithWorkerResponsePrivate : public MTurkResponsePrivate {

public:

    explicit AssociateQualificationWithWorkerResponsePrivate(AssociateQualificationWithWorkerResponse * const q);

    void parseAssociateQualificationWithWorkerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateQualificationWithWorkerResponse)
    Q_DISABLE_COPY(AssociateQualificationWithWorkerResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
