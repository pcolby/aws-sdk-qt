// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBINSTANCERESPONSE_P_H
#define QTAWS_CREATEDBINSTANCERESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class CreateDBInstanceResponse;

class CreateDBInstanceResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit CreateDBInstanceResponsePrivate(CreateDBInstanceResponse * const q);

    void parseCreateDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBInstanceResponse)
    Q_DISABLE_COPY(CreateDBInstanceResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
