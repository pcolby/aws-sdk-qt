// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHESAURUSRESPONSE_P_H
#define QTAWS_CREATETHESAURUSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateThesaurusResponse;

class CreateThesaurusResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateThesaurusResponsePrivate(CreateThesaurusResponse * const q);

    void parseCreateThesaurusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateThesaurusResponse)
    Q_DISABLE_COPY(CreateThesaurusResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
