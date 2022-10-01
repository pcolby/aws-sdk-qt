// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCECOLLECTIONREQUEST_H
#define QTAWS_UPDATERESOURCECOLLECTIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateResourceCollectionRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateResourceCollectionRequest : public DevOpsGuruRequest {

public:
    UpdateResourceCollectionRequest(const UpdateResourceCollectionRequest &other);
    UpdateResourceCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceCollectionRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
