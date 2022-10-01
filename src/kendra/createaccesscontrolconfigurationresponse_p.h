// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSCONTROLCONFIGURATIONRESPONSE_P_H
#define QTAWS_CREATEACCESSCONTROLCONFIGURATIONRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class CreateAccessControlConfigurationResponse;

class CreateAccessControlConfigurationResponsePrivate : public KendraResponsePrivate {

public:

    explicit CreateAccessControlConfigurationResponsePrivate(CreateAccessControlConfigurationResponse * const q);

    void parseCreateAccessControlConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessControlConfigurationResponse)
    Q_DISABLE_COPY(CreateAccessControlConfigurationResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
