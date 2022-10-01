// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSIGHTRESPONSE_P_H
#define QTAWS_CREATEINSIGHTRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class CreateInsightResponse;

class CreateInsightResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit CreateInsightResponsePrivate(CreateInsightResponse * const q);

    void parseCreateInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInsightResponse)
    Q_DISABLE_COPY(CreateInsightResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
