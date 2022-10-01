// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationTemplateResponse;

class UpdateReplicationConfigurationTemplateResponsePrivate : public MgnResponsePrivate {

public:

    explicit UpdateReplicationConfigurationTemplateResponsePrivate(UpdateReplicationConfigurationTemplateResponse * const q);

    void parseUpdateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(UpdateReplicationConfigurationTemplateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
