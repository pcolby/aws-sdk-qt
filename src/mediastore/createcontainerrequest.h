// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERREQUEST_H
#define QTAWS_CREATECONTAINERREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class CreateContainerRequestPrivate;

class QTAWSMEDIASTORE_EXPORT CreateContainerRequest : public MediaStoreRequest {

public:
    CreateContainerRequest(const CreateContainerRequest &other);
    CreateContainerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
