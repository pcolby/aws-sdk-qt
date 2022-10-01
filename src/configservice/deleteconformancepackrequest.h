// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFORMANCEPACKREQUEST_H
#define QTAWS_DELETECONFORMANCEPACKREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConformancePackRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConformancePackRequest : public ConfigServiceRequest {

public:
    DeleteConformancePackRequest(const DeleteConformancePackRequest &other);
    DeleteConformancePackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
