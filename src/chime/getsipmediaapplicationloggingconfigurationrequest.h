// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_GETSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetSipMediaApplicationLoggingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT GetSipMediaApplicationLoggingConfigurationRequest : public ChimeRequest {

public:
    GetSipMediaApplicationLoggingConfigurationRequest(const GetSipMediaApplicationLoggingConfigurationRequest &other);
    GetSipMediaApplicationLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSipMediaApplicationLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
