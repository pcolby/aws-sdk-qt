// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXRESPONSE_P_H
#define QTAWS_UPDATEINDEXRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateIndexResponse;

class UpdateIndexResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateIndexResponsePrivate(UpdateIndexResponse * const q);

    void parseUpdateIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIndexResponse)
    Q_DISABLE_COPY(UpdateIndexResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
