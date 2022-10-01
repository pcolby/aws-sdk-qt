// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERREQUEST_H
#define QTAWS_DELETECONTAINERREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DeleteContainerRequest : public MediaStoreRequest {

public:
    DeleteContainerRequest(const DeleteContainerRequest &other);
    DeleteContainerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
