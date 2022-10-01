// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLONESTACKRESPONSE_P_H
#define QTAWS_CLONESTACKRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class CloneStackResponse;

class CloneStackResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit CloneStackResponsePrivate(CloneStackResponse * const q);

    void parseCloneStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloneStackResponse)
    Q_DISABLE_COPY(CloneStackResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
