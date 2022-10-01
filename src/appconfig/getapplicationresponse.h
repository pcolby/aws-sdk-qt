// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONRESPONSE_H
#define QTAWS_GETAPPLICATIONRESPONSE_H

#include "appconfigresponse.h"
#include "getapplicationrequest.h"

namespace QtAws {
namespace AppConfig {

class GetApplicationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetApplicationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetApplicationResponse(const GetApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationResponse)
    Q_DISABLE_COPY(GetApplicationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
