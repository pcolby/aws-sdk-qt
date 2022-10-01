// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICATIONFACTORRESPONSE_P_H
#define QTAWS_INCREASEREPLICATIONFACTORRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class IncreaseReplicationFactorResponse;

class IncreaseReplicationFactorResponsePrivate : public DaxResponsePrivate {

public:

    explicit IncreaseReplicationFactorResponsePrivate(IncreaseReplicationFactorResponse * const q);

    void parseIncreaseReplicationFactorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IncreaseReplicationFactorResponse)
    Q_DISABLE_COPY(IncreaseReplicationFactorResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
