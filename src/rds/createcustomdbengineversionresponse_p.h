// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDBENGINEVERSIONRESPONSE_P_H
#define QTAWS_CREATECUSTOMDBENGINEVERSIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateCustomDBEngineVersionResponse;

class CreateCustomDBEngineVersionResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateCustomDBEngineVersionResponsePrivate(CreateCustomDBEngineVersionResponse * const q);

    void parseCreateCustomDBEngineVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCustomDBEngineVersionResponse)
    Q_DISABLE_COPY(CreateCustomDBEngineVersionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
