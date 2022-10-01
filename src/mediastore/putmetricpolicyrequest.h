// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICPOLICYREQUEST_H
#define QTAWS_PUTMETRICPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class PutMetricPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT PutMetricPolicyRequest : public MediaStoreRequest {

public:
    PutMetricPolicyRequest(const PutMetricPolicyRequest &other);
    PutMetricPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
