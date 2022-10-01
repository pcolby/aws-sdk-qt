// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMRESPONSE_P_H
#define QTAWS_DELETEHSMRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class DeleteHsmResponse;

class DeleteHsmResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit DeleteHsmResponsePrivate(DeleteHsmResponse * const q);

    void parseDeleteHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHsmResponse)
    Q_DISABLE_COPY(DeleteHsmResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
