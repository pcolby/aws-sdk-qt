// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSTREAMCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEAUDITSTREAMCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateAuditStreamConfigurationResponse;

class UpdateAuditStreamConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateAuditStreamConfigurationResponsePrivate(UpdateAuditStreamConfigurationResponse * const q);

    void parseUpdateAuditStreamConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAuditStreamConfigurationResponse)
    Q_DISABLE_COPY(UpdateAuditStreamConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
