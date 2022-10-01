// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHESAURIRESPONSE_P_H
#define QTAWS_LISTTHESAURIRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class ListThesauriResponse;

class ListThesauriResponsePrivate : public KendraResponsePrivate {

public:

    explicit ListThesauriResponsePrivate(ListThesauriResponse * const q);

    void parseListThesauriResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListThesauriResponse)
    Q_DISABLE_COPY(ListThesauriResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
