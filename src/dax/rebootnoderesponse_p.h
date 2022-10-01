// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTNODERESPONSE_P_H
#define QTAWS_REBOOTNODERESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class RebootNodeResponse;

class RebootNodeResponsePrivate : public DaxResponsePrivate {

public:

    explicit RebootNodeResponsePrivate(RebootNodeResponse * const q);

    void parseRebootNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootNodeResponse)
    Q_DISABLE_COPY(RebootNodeResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
