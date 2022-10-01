// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSCONTROLCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEACCESSCONTROLCONFIGURATIONRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class UpdateAccessControlConfigurationResponse;

class UpdateAccessControlConfigurationResponsePrivate : public KendraResponsePrivate {

public:

    explicit UpdateAccessControlConfigurationResponsePrivate(UpdateAccessControlConfigurationResponse * const q);

    void parseUpdateAccessControlConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccessControlConfigurationResponse)
    Q_DISABLE_COPY(UpdateAccessControlConfigurationResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
