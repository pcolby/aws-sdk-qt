// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVISIBLETOALLUSERSRESPONSE_P_H
#define QTAWS_SETVISIBLETOALLUSERSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class SetVisibleToAllUsersResponse;

class SetVisibleToAllUsersResponsePrivate : public EmrResponsePrivate {

public:

    explicit SetVisibleToAllUsersResponsePrivate(SetVisibleToAllUsersResponse * const q);

    void parseSetVisibleToAllUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetVisibleToAllUsersResponse)
    Q_DISABLE_COPY(SetVisibleToAllUsersResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
