// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTRESPONSE_P_H
#define QTAWS_DELETECONTACTRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteContactResponse;

class DeleteContactResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteContactResponsePrivate(DeleteContactResponse * const q);

    void parseDeleteContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContactResponse)
    Q_DISABLE_COPY(DeleteContactResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
