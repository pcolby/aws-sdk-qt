// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVCENTERCLIENTRESPONSE_P_H
#define QTAWS_DELETEVCENTERCLIENTRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DeleteVcenterClientResponse;

class DeleteVcenterClientResponsePrivate : public MgnResponsePrivate {

public:

    explicit DeleteVcenterClientResponsePrivate(DeleteVcenterClientResponse * const q);

    void parseDeleteVcenterClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVcenterClientResponse)
    Q_DISABLE_COPY(DeleteVcenterClientResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
