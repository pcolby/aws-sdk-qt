// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEACCESSCONTROLCONFIGURATIONRESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DeleteAccessControlConfigurationResponse;

class DeleteAccessControlConfigurationResponsePrivate : public KendraResponsePrivate {

public:

    explicit DeleteAccessControlConfigurationResponsePrivate(DeleteAccessControlConfigurationResponse * const q);

    void parseDeleteAccessControlConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessControlConfigurationResponse)
    Q_DISABLE_COPY(DeleteAccessControlConfigurationResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
