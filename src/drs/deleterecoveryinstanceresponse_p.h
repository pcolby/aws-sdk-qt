// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECOVERYINSTANCERESPONSE_P_H
#define QTAWS_DELETERECOVERYINSTANCERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DeleteRecoveryInstanceResponse;

class DeleteRecoveryInstanceResponsePrivate : public DrsResponsePrivate {

public:

    explicit DeleteRecoveryInstanceResponsePrivate(DeleteRecoveryInstanceResponse * const q);

    void parseDeleteRecoveryInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecoveryInstanceResponse)
    Q_DISABLE_COPY(DeleteRecoveryInstanceResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
