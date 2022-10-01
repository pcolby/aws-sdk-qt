// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELUNACLIENTRESPONSE_P_H
#define QTAWS_DELETELUNACLIENTRESPONSE_P_H

#include "cloudhsmresponse_p.h"

namespace QtAws {
namespace CloudHsm {

class DeleteLunaClientResponse;

class DeleteLunaClientResponsePrivate : public CloudHsmResponsePrivate {

public:

    explicit DeleteLunaClientResponsePrivate(DeleteLunaClientResponse * const q);

    void parseDeleteLunaClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLunaClientResponse)
    Q_DISABLE_COPY(DeleteLunaClientResponsePrivate)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
