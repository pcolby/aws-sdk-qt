// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTEREVENTTOPICREQUEST_H
#define QTAWS_DEREGISTEREVENTTOPICREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterEventTopicRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeregisterEventTopicRequest : public DirectoryServiceRequest {

public:
    DeregisterEventTopicRequest(const DeregisterEventTopicRequest &other);
    DeregisterEventTopicRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterEventTopicRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
