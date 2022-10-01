// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONRECORDERREQUEST_H
#define QTAWS_DELETECONFIGURATIONRECORDERREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigurationRecorderRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigurationRecorderRequest : public ConfigServiceRequest {

public:
    DeleteConfigurationRecorderRequest(const DeleteConfigurationRecorderRequest &other);
    DeleteConfigurationRecorderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationRecorderRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
