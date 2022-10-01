// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTRESPONSE_P_H
#define QTAWS_UPDATECONTACTRESPONSE_P_H

#include "ssmcontactsresponse_p.h"

namespace QtAws {
namespace SsmContacts {

class UpdateContactResponse;

class UpdateContactResponsePrivate : public SsmContactsResponsePrivate {

public:

    explicit UpdateContactResponsePrivate(UpdateContactResponse * const q);

    void parseUpdateContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactResponse)
    Q_DISABLE_COPY(UpdateContactResponsePrivate)

};

} // namespace SsmContacts
} // namespace QtAws

#endif
