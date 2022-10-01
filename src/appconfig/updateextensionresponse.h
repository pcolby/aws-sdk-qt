// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONRESPONSE_H
#define QTAWS_UPDATEEXTENSIONRESPONSE_H

#include "appconfigresponse.h"
#include "updateextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT UpdateExtensionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    UpdateExtensionResponse(const UpdateExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExtensionResponse)
    Q_DISABLE_COPY(UpdateExtensionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
