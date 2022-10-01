// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTRESPONSE_P_H
#define QTAWS_CREATECONTACTRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateContactResponse;

class CreateContactResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateContactResponsePrivate(CreateContactResponse * const q);

    void parseCreateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContactResponse)
    Q_DISABLE_COPY(CreateContactResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
