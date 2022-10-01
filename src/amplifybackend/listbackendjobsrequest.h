// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDJOBSREQUEST_H
#define QTAWS_LISTBACKENDJOBSREQUEST_H

#include "amplifybackendrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListBackendJobsRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ListBackendJobsRequest : public AmplifyBackendRequest {

public:
    ListBackendJobsRequest(const ListBackendJobsRequest &other);
    ListBackendJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBackendJobsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
