// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICPOLICYREQUEST_H
#define QTAWS_DELETEMETRICPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteMetricPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DeleteMetricPolicyRequest : public MediaStoreRequest {

public:
    DeleteMetricPolicyRequest(const DeleteMetricPolicyRequest &other);
    DeleteMetricPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
