// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGURATIONSESSIONREQUEST_H
#define QTAWS_STARTCONFIGURATIONSESSIONREQUEST_H

#include "appconfigdatarequest.h"

namespace QtAws {
namespace AppConfigData {

class StartConfigurationSessionRequestPrivate;

class QTAWSAPPCONFIGDATA_EXPORT StartConfigurationSessionRequest : public AppConfigDataRequest {

public:
    StartConfigurationSessionRequest(const StartConfigurationSessionRequest &other);
    StartConfigurationSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigurationSessionRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
