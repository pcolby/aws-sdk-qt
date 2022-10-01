// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGAGEMENTSRESPONSE_P_H
#define QTAWS_LISTENGAGEMENTSRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class ListEngagementsResponse;

class ListEngagementsResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit ListEngagementsResponsePrivate(ListEngagementsResponse * const q);

    void parseListEngagementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEngagementsResponse)
    Q_DISABLE_COPY(ListEngagementsResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
