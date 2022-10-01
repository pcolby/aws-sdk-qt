// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTRESPONSE_P_H
#define QTAWS_DELETEACCESSPOINTRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DeleteAccessPointResponse;

class DeleteAccessPointResponsePrivate : public EfsResponsePrivate {

public:

    explicit DeleteAccessPointResponsePrivate(DeleteAccessPointResponse * const q);

    void parseDeleteAccessPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointResponse)
    Q_DISABLE_COPY(DeleteAccessPointResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
