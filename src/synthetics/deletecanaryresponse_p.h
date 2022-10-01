// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECANARYRESPONSE_P_H
#define QTAWS_DELETECANARYRESPONSE_P_H

#include "syntheticsresponse_p.h"

namespace QtAws {
namespace Synthetics {

class DeleteCanaryResponse;

class DeleteCanaryResponsePrivate : public SyntheticsResponsePrivate {

public:

    explicit DeleteCanaryResponsePrivate(DeleteCanaryResponse * const q);

    void parseDeleteCanaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCanaryResponse)
    Q_DISABLE_COPY(DeleteCanaryResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
