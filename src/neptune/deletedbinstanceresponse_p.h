// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCERESPONSE_P_H
#define QTAWS_DELETEDBINSTANCERESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DeleteDBInstanceResponse;

class DeleteDBInstanceResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DeleteDBInstanceResponsePrivate(DeleteDBInstanceResponse * const q);

    void parseDeleteDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBInstanceResponse)
    Q_DISABLE_COPY(DeleteDBInstanceResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
