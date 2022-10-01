// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCERESPONSE_P_H
#define QTAWS_REBOOTDBINSTANCERESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class RebootDBInstanceResponse;

class RebootDBInstanceResponsePrivate : public DocDbResponsePrivate {

public:

    explicit RebootDBInstanceResponsePrivate(RebootDBInstanceResponse * const q);

    void parseRebootDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootDBInstanceResponse)
    Q_DISABLE_COPY(RebootDBInstanceResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
