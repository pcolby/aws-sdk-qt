// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetResponse;

class DeleteConfigurationSetResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteConfigurationSetResponsePrivate(DeleteConfigurationSetResponse * const q);

    void parseDeleteConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
