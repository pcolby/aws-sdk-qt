// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCERESPONSE_P_H
#define QTAWS_REBOOTINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class RebootInstanceResponse;

class RebootInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit RebootInstanceResponsePrivate(RebootInstanceResponse * const q);

    void parseRebootInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootInstanceResponse)
    Q_DISABLE_COPY(RebootInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
