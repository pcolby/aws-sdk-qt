// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTACCESSRESPONSE_P_H
#define QTAWS_GRANTACCESSRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class GrantAccessResponse;

class GrantAccessResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit GrantAccessResponsePrivate(GrantAccessResponse * const q);

    void parseGrantAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GrantAccessResponse)
    Q_DISABLE_COPY(GrantAccessResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
