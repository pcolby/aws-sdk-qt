// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEPOLICYREQUEST_H
#define QTAWS_DELETELIFECYCLEPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteLifecyclePolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DeleteLifecyclePolicyRequest : public MediaStoreRequest {

public:
    DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other);
    DeleteLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLifecyclePolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
