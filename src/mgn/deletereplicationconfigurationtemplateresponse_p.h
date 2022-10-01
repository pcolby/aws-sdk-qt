// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONTEMPLATERESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class DeleteReplicationConfigurationTemplateResponse;

class DeleteReplicationConfigurationTemplateResponsePrivate : public MgnResponsePrivate {

public:

    explicit DeleteReplicationConfigurationTemplateResponsePrivate(DeleteReplicationConfigurationTemplateResponse * const q);

    void parseDeleteReplicationConfigurationTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationConfigurationTemplateResponse)
    Q_DISABLE_COPY(DeleteReplicationConfigurationTemplateResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
