// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_CREATELOGGINGCONFIGURATIONRESPONSE_H

#include "ampresponse.h"
#include "createloggingconfigurationrequest.h"

namespace QtAws {
namespace Amp {

class CreateLoggingConfigurationResponsePrivate;

class QTAWSAMP_EXPORT CreateLoggingConfigurationResponse : public AmpResponse {
    Q_OBJECT

public:
    CreateLoggingConfigurationResponse(const CreateLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLoggingConfigurationResponse)
    Q_DISABLE_COPY(CreateLoggingConfigurationResponse)

};

} // namespace Amp
} // namespace QtAws

#endif
