// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTPREFERENCESRESPONSE_P_H
#define QTAWS_PUTACCOUNTPREFERENCESRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class PutAccountPreferencesResponse;

class PutAccountPreferencesResponsePrivate : public EfsResponsePrivate {

public:

    explicit PutAccountPreferencesResponsePrivate(PutAccountPreferencesResponse * const q);

    void parsePutAccountPreferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccountPreferencesResponse)
    Q_DISABLE_COPY(PutAccountPreferencesResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
