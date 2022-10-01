// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLECONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTLIFECYCLECONFIGURATIONRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class PutLifecycleConfigurationResponse;

class PutLifecycleConfigurationResponsePrivate : public EfsResponsePrivate {

public:

    explicit PutLifecycleConfigurationResponsePrivate(PutLifecycleConfigurationResponse * const q);

    void parsePutLifecycleConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLifecycleConfigurationResponse)
    Q_DISABLE_COPY(PutLifecycleConfigurationResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
