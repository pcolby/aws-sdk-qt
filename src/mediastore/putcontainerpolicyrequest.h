// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERPOLICYREQUEST_H
#define QTAWS_PUTCONTAINERPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class PutContainerPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT PutContainerPolicyRequest : public MediaStoreRequest {

public:
    PutContainerPolicyRequest(const PutContainerPolicyRequest &other);
    PutContainerPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
