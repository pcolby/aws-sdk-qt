// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDBENGINEVERSIONRESPONSE_P_H
#define QTAWS_DELETECUSTOMDBENGINEVERSIONRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteCustomDBEngineVersionResponse;

class DeleteCustomDBEngineVersionResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteCustomDBEngineVersionResponsePrivate(DeleteCustomDBEngineVersionResponse * const q);

    void parseDeleteCustomDBEngineVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomDBEngineVersionResponse)
    Q_DISABLE_COPY(DeleteCustomDBEngineVersionResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
