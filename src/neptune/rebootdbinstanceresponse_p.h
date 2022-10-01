// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCERESPONSE_P_H
#define QTAWS_REBOOTDBINSTANCERESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class RebootDBInstanceResponse;

class RebootDBInstanceResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit RebootDBInstanceResponsePrivate(RebootDBInstanceResponse * const q);

    void parseRebootDBInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootDBInstanceResponse)
    Q_DISABLE_COPY(RebootDBInstanceResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
