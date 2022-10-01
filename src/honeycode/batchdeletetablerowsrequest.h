// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEROWSREQUEST_H
#define QTAWS_BATCHDELETETABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class BatchDeleteTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT BatchDeleteTableRowsRequest : public HoneycodeRequest {

public:
    BatchDeleteTableRowsRequest(const BatchDeleteTableRowsRequest &other);
    BatchDeleteTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
