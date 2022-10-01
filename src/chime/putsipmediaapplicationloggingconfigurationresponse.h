// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "putsipmediaapplicationloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutSipMediaApplicationLoggingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT PutSipMediaApplicationLoggingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutSipMediaApplicationLoggingConfigurationResponse(const PutSipMediaApplicationLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSipMediaApplicationLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSipMediaApplicationLoggingConfigurationResponse)
    Q_DISABLE_COPY(PutSipMediaApplicationLoggingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
