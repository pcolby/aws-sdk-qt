// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETACCOUNTSTATUSREQUEST_H
#define QTAWS_BATCHGETACCOUNTSTATUSREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class BatchGetAccountStatusRequestPrivate;

class QTAWSINSPECTOR2_EXPORT BatchGetAccountStatusRequest : public Inspector2Request {

public:
    BatchGetAccountStatusRequest(const BatchGetAccountStatusRequest &other);
    BatchGetAccountStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetAccountStatusRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
