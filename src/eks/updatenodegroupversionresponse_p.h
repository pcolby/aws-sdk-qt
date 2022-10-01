// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPVERSIONRESPONSE_P_H
#define QTAWS_UPDATENODEGROUPVERSIONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupVersionResponse;

class UpdateNodegroupVersionResponsePrivate : public EksResponsePrivate {

public:

    explicit UpdateNodegroupVersionResponsePrivate(UpdateNodegroupVersionResponse * const q);

    void parseUpdateNodegroupVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNodegroupVersionResponse)
    Q_DISABLE_COPY(UpdateNodegroupVersionResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
