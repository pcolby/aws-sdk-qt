// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERPOLICYREQUEST_H
#define QTAWS_DELETECONTAINERPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DeleteContainerPolicyRequest : public MediaStoreRequest {

public:
    DeleteContainerPolicyRequest(const DeleteContainerPolicyRequest &other);
    DeleteContainerPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
