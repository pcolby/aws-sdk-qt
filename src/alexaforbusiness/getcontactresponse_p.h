// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTRESPONSE_P_H
#define QTAWS_GETCONTACTRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetContactResponse;

class GetContactResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetContactResponsePrivate(GetContactResponse * const q);

    void parseGetContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactResponse)
    Q_DISABLE_COPY(GetContactResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
