// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETELOGGINGCONFIGURATIONRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class DeleteLoggingConfigurationResponse;

class DeleteLoggingConfigurationResponsePrivate : public AmpResponsePrivate {

public:

    explicit DeleteLoggingConfigurationResponsePrivate(DeleteLoggingConfigurationResponse * const q);

    void parseDeleteLoggingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoggingConfigurationResponse)
    Q_DISABLE_COPY(DeleteLoggingConfigurationResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
