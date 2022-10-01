// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSCHEDULEDACTIONRESPONSE_P_H
#define QTAWS_MODIFYSCHEDULEDACTIONRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyScheduledActionResponse;

class ModifyScheduledActionResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyScheduledActionResponsePrivate(ModifyScheduledActionResponse * const q);

    void parseModifyScheduledActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyScheduledActionResponse)
    Q_DISABLE_COPY(ModifyScheduledActionResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
