// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHESAURUSRESPONSE_P_H
#define QTAWS_UPDATETHESAURUSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateThesaurusResponse;

class UpdateThesaurusResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateThesaurusResponsePrivate(UpdateThesaurusResponse * const q);

    void parseUpdateThesaurusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateThesaurusResponse)
    Q_DISABLE_COPY(UpdateThesaurusResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
