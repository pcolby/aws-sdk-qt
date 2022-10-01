// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCERESPONSE_P_H
#define QTAWS_CREATEDBINSTANCERESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class CreateDBInstanceResponse;

class CreateDBInstanceResponsePrivate : public DocDbResponsePrivate {

public:

    explicit CreateDBInstanceResponsePrivate(CreateDBInstanceResponse * const q);

    void parseCreateDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBInstanceResponse)
    Q_DISABLE_COPY(CreateDBInstanceResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
