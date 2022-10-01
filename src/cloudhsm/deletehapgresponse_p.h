// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHAPGRESPONSE_P_H
#define QTAWS_DELETEHAPGRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class DeleteHapgResponse;

class DeleteHapgResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit DeleteHapgResponsePrivate(DeleteHapgResponse * const q);

    void parseDeleteHapgResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHapgResponse)
    Q_DISABLE_COPY(DeleteHapgResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
