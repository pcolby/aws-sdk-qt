// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLATESTCONFIGURATIONREQUEST_H
#define QTAWS_GETLATESTCONFIGURATIONREQUEST_H

#include "appconfigdatarequest.h"

namespace QtAws {
namespace AppConfigData {

class GetLatestConfigurationRequestPrivate;

class QTAWSAPPCONFIGDATA_EXPORT GetLatestConfigurationRequest : public AppConfigDataRequest {

public:
    GetLatestConfigurationRequest(const GetLatestConfigurationRequest &other);
    GetLatestConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLatestConfigurationRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
