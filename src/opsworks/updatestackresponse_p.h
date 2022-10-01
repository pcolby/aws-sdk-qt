// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKRESPONSE_P_H
#define QTAWS_UPDATESTACKRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class UpdateStackResponse;

class UpdateStackResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit UpdateStackResponsePrivate(UpdateStackResponse * const q);

    void parseUpdateStackResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStackResponse)
    Q_DISABLE_COPY(UpdateStackResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
