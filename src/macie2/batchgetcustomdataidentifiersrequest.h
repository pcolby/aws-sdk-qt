// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSREQUEST_H
#define QTAWS_BATCHGETCUSTOMDATAIDENTIFIERSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class BatchGetCustomDataIdentifiersRequestPrivate;

class QTAWSMACIE2_EXPORT BatchGetCustomDataIdentifiersRequest : public Macie2Request {

public:
    BatchGetCustomDataIdentifiersRequest(const BatchGetCustomDataIdentifiersRequest &other);
    BatchGetCustomDataIdentifiersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCustomDataIdentifiersRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
