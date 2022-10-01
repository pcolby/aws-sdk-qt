// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPSERTTABLEROWSREQUEST_H
#define QTAWS_BATCHUPSERTTABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpsertTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT BatchUpsertTableRowsRequest : public HoneycodeRequest {

public:
    BatchUpsertTableRowsRequest(const BatchUpsertTableRowsRequest &other);
    BatchUpsertTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpsertTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
