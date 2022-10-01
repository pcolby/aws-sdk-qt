// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCUSTOMDBENGINEVERSIONRESPONSE_P_H
#define QTAWS_MODIFYCUSTOMDBENGINEVERSIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyCustomDBEngineVersionResponse;

class ModifyCustomDBEngineVersionResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyCustomDBEngineVersionResponsePrivate(ModifyCustomDBEngineVersionResponse * const q);

    void parseModifyCustomDBEngineVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyCustomDBEngineVersionResponse)
    Q_DISABLE_COPY(ModifyCustomDBEngineVersionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
