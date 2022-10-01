// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLATESTCONFIGURATIONRESPONSE_H
#define QTAWS_GETLATESTCONFIGURATIONRESPONSE_H

#include "appconfigdataresponse.h"
#include "getlatestconfigurationrequest.h"

namespace QtAws {
namespace AppConfigData {

class GetLatestConfigurationResponsePrivate;

class QTAWSAPPCONFIGDATA_EXPORT GetLatestConfigurationResponse : public AppConfigDataResponse {
    Q_OBJECT

public:
    GetLatestConfigurationResponse(const GetLatestConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLatestConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLatestConfigurationResponse)
    Q_DISABLE_COPY(GetLatestConfigurationResponse)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
