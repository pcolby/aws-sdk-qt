// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICATIONFACTORRESPONSE_P_H
#define QTAWS_DECREASEREPLICATIONFACTORRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DecreaseReplicationFactorResponse;

class DecreaseReplicationFactorResponsePrivate : public DaxResponsePrivate {

public:

    explicit DecreaseReplicationFactorResponsePrivate(DecreaseReplicationFactorResponse * const q);

    void parseDecreaseReplicationFactorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DecreaseReplicationFactorResponse)
    Q_DISABLE_COPY(DecreaseReplicationFactorResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
