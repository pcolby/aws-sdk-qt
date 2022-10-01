// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERPOLICYREQUEST_H
#define QTAWS_GETCONTAINERPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class GetContainerPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT GetContainerPolicyRequest : public MediaStoreRequest {

public:
    GetContainerPolicyRequest(const GetContainerPolicyRequest &other);
    GetContainerPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
