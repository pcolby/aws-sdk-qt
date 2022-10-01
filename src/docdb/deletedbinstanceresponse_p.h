// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCERESPONSE_P_H
#define QTAWS_DELETEDBINSTANCERESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteDBInstanceResponse;

class DeleteDBInstanceResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteDBInstanceResponsePrivate(DeleteDBInstanceResponse * const q);

    void parseDeleteDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBInstanceResponse)
    Q_DISABLE_COPY(DeleteDBInstanceResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
