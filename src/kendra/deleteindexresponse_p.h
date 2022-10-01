// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINDEXRESPONSE_P_H
#define QTAWS_DELETEINDEXRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteIndexResponse;

class DeleteIndexResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteIndexResponsePrivate(DeleteIndexResponse * const q);

    void parseDeleteIndexResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIndexResponse)
    Q_DISABLE_COPY(DeleteIndexResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
