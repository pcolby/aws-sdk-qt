// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLBACKENDSRESPONSE_P_H
#define QTAWS_REMOVEALLBACKENDSRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveAllBackendsResponse;

class RemoveAllBackendsResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit RemoveAllBackendsResponsePrivate(RemoveAllBackendsResponse * const q);

    void parseRemoveAllBackendsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveAllBackendsResponse)
    Q_DISABLE_COPY(RemoveAllBackendsResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
