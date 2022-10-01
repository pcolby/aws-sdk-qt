// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHAPGRESPONSE_P_H
#define QTAWS_MODIFYHAPGRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHapgResponse;

class ModifyHapgResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ModifyHapgResponsePrivate(ModifyHapgResponse * const q);

    void parseModifyHapgResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyHapgResponse)
    Q_DISABLE_COPY(ModifyHapgResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
