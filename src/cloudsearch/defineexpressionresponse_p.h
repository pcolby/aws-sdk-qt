// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEFINEEXPRESSIONRESPONSE_P_H
#define QTAWS_DEFINEEXPRESSIONRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class DefineExpressionResponse;

class DefineExpressionResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit DefineExpressionResponsePrivate(DefineExpressionResponse * const q);

    void parseDefineExpressionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DefineExpressionResponse)
    Q_DISABLE_COPY(DefineExpressionResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
