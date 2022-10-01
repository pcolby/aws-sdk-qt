// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYREQUEST_H
#define QTAWS_PUTLIFECYCLEPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class PutLifecyclePolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT PutLifecyclePolicyRequest : public MediaStoreRequest {

public:
    PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other);
    PutLifecyclePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecyclePolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
