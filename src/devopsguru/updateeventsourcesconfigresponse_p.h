// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_P_H
#define QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateEventSourcesConfigResponse;

class UpdateEventSourcesConfigResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit UpdateEventSourcesConfigResponsePrivate(UpdateEventSourcesConfigResponse * const q);

    void parseUpdateEventSourcesConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventSourcesConfigResponse)
    Q_DISABLE_COPY(UpdateEventSourcesConfigResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
