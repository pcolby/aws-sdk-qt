// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONSESSIONRESPONSE_H
#define QTAWS_STARTCONFIGURATIONSESSIONRESPONSE_H

#include "appconfigdataresponse.h"
#include "startconfigurationsessionrequest.h"

namespace QtAws {
namespace AppConfigData {

class StartConfigurationSessionResponsePrivate;

class QTAWSAPPCONFIGDATA_EXPORT StartConfigurationSessionResponse : public AppConfigDataResponse {
    Q_OBJECT

public:
    StartConfigurationSessionResponse(const StartConfigurationSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartConfigurationSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigurationSessionResponse)
    Q_DISABLE_COPY(StartConfigurationSessionResponse)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
