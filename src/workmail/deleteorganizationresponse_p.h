// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONRESPONSE_P_H
#define QTAWS_DELETEORGANIZATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteOrganizationResponse;

class DeleteOrganizationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteOrganizationResponsePrivate(DeleteOrganizationResponse * const q);

    void parseDeleteOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationResponse)
    Q_DISABLE_COPY(DeleteOrganizationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
