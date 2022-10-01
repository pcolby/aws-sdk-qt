// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECOLLECTIONREQUEST_H
#define QTAWS_GETRESOURCECOLLECTIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetResourceCollectionRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT GetResourceCollectionRequest : public DevOpsGuruRequest {

public:
    GetResourceCollectionRequest(const GetResourceCollectionRequest &other);
    GetResourceCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceCollectionRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
