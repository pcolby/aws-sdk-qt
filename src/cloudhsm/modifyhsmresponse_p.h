// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHSMRESPONSE_P_H
#define QTAWS_MODIFYHSMRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class ModifyHsmResponse;

class ModifyHsmResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit ModifyHsmResponsePrivate(ModifyHsmResponse * const q);

    void parseModifyHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyHsmResponse)
    Q_DISABLE_COPY(ModifyHsmResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
