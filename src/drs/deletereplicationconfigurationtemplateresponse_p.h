// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DeleteReplicationConfigurationTemplateResponse;

class DeleteReplicationConfigurationTemplateResponsePrivate : public DrsResponsePrivate {

public:

    explicit DeleteReplicationConfigurationTemplateResponsePrivate(DeleteReplicationConfigurationTemplateResponse * const q);

    void parseDeleteReplicationConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteReplicationConfigurationTemplateResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
