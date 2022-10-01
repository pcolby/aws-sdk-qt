// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_P_H
#define QTAWS_DELETEDEDICATEDIPPOOLRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteDedicatedIpPoolResponse;

class DeleteDedicatedIpPoolResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteDedicatedIpPoolResponsePrivate(DeleteDedicatedIpPoolResponse * const q);

    void parseDeleteDedicatedIpPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDedicatedIpPoolResponse)
    Q_DISABLE_COPY(DeleteDedicatedIpPoolResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
