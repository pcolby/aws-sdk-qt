// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEDOMAINCONFIGURATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DeleteDomainConfigurationResponse;

class DeleteDomainConfigurationResponsePrivate : public IoTResponsePrivate {

public:

    explicit DeleteDomainConfigurationResponsePrivate(DeleteDomainConfigurationResponse * const q);

    void parseDeleteDomainConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDomainConfigurationResponse)
    Q_DISABLE_COPY(DeleteDomainConfigurationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
