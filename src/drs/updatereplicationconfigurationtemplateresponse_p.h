// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationTemplateResponse;

class UpdateReplicationConfigurationTemplateResponsePrivate : public DrsResponsePrivate {

public:

    explicit UpdateReplicationConfigurationTemplateResponsePrivate(UpdateReplicationConfigurationTemplateResponse * const q);

    void parseUpdateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationTemplateResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
