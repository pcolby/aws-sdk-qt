// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTSIPMEDIAAPPLICATIONLOGGINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutSipMediaApplicationLoggingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT PutSipMediaApplicationLoggingConfigurationRequest : public ChimeRequest {

public:
    PutSipMediaApplicationLoggingConfigurationRequest(const PutSipMediaApplicationLoggingConfigurationRequest &other);
    PutSipMediaApplicationLoggingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSipMediaApplicationLoggingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
