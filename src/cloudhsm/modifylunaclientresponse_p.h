// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLUNACLIENTRESPONSE_P_H
#define QTAWS_MODIFYLUNACLIENTRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ModifyLunaClientResponse;

class ModifyLunaClientResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ModifyLunaClientResponsePrivate(ModifyLunaClientResponse * const q);

    void parseModifyLunaClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyLunaClientResponse)
    Q_DISABLE_COPY(ModifyLunaClientResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
