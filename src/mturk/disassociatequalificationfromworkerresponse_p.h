// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERRESPONSE_P_H
#define QTAWS_DISASSOCIATEQUALIFICATIONFROMWORKERRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class DisassociateQualificationFromWorkerResponse;

class DisassociateQualificationFromWorkerResponsePrivate : public MTurkResponsePrivate {

public:

    explicit DisassociateQualificationFromWorkerResponsePrivate(DisassociateQualificationFromWorkerResponse * const q);

    void parseDisassociateQualificationFromWorkerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateQualificationFromWorkerResponse)
    Q_DISABLE_COPY(DisassociateQualificationFromWorkerResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
