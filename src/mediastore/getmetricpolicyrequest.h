// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICPOLICYREQUEST_H
#define QTAWS_GETMETRICPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class GetMetricPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT GetMetricPolicyRequest : public MediaStoreRequest {

public:
    GetMetricPolicyRequest(const GetMetricPolicyRequest &other);
    GetMetricPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
