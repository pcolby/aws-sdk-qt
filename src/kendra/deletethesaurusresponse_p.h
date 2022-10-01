// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHESAURUSRESPONSE_P_H
#define QTAWS_DELETETHESAURUSRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteThesaurusResponse;

class DeleteThesaurusResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteThesaurusResponsePrivate(DeleteThesaurusResponse * const q);

    void parseDeleteThesaurusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteThesaurusResponse)
    Q_DISABLE_COPY(DeleteThesaurusResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
