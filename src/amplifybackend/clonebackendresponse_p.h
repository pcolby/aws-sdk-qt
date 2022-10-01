// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONEBACKENDRESPONSE_P_H
#define QTAWS_CLONEBACKENDRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CloneBackendResponse;

class CloneBackendResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CloneBackendResponsePrivate(CloneBackendResponse * const q);

    void parseCloneBackendResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloneBackendResponse)
    Q_DISABLE_COPY(CloneBackendResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
