// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXRESPONSE_P_H
#define QTAWS_CREATEINDEXRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateIndexResponse;

class CreateIndexResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateIndexResponsePrivate(CreateIndexResponse * const q);

    void parseCreateIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIndexResponse)
    Q_DISABLE_COPY(CreateIndexResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
