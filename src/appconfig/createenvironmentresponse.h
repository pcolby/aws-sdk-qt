// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTRESPONSE_H
#define QTAWS_CREATEENVIRONMENTRESPONSE_H

#include "appconfigresponse.h"
#include "createenvironmentrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateEnvironmentResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateEnvironmentResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateEnvironmentResponse(const CreateEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentResponse)
    Q_DISABLE_COPY(CreateEnvironmentResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
