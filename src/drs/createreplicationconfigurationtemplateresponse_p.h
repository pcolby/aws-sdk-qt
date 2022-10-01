// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class CreateReplicationConfigurationTemplateResponse;

class CreateReplicationConfigurationTemplateResponsePrivate : public DrsResponsePrivate {

public:

    explicit CreateReplicationConfigurationTemplateResponsePrivate(CreateReplicationConfigurationTemplateResponse * const q);

    void parseCreateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(CreateReplicationConfigurationTemplateResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
