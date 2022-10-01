// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPRESSIONRESPONSE_P_H
#define QTAWS_DELETEEXPRESSIONRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DeleteExpressionResponse;

class DeleteExpressionResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DeleteExpressionResponsePrivate(DeleteExpressionResponse * const q);

    void parseDeleteExpressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteExpressionResponse)
    Q_DISABLE_COPY(DeleteExpressionResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
