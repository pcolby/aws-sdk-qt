// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONRESPONSE_H
#define QTAWS_CREATEEXTENSIONRESPONSE_H

#include "appconfigresponse.h"
#include "createextensionrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateExtensionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateExtensionResponse(const CreateExtensionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExtensionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtensionResponse)
    Q_DISABLE_COPY(CreateExtensionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
