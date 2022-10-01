// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "getsipmediaapplicationloggingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationLoggingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetSipMediaApplicationLoggingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetSipMediaApplicationLoggingConfigurationResponse(const GetSipMediaApplicationLoggingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSipMediaApplicationLoggingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSipMediaApplicationLoggingConfigurationResponse)
    Q_DISABLE_COPY(GetSipMediaApplicationLoggingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
