// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTEREVENTTOPICREQUEST_H
#define QTAWS_REGISTEREVENTTOPICREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class RegisterEventTopicRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RegisterEventTopicRequest : public DirectoryServiceRequest {

public:
    RegisterEventTopicRequest(const RegisterEventTopicRequest &other);
    RegisterEventTopicRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterEventTopicRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
