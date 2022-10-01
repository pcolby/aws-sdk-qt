// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATETABLEROWSREQUEST_H
#define QTAWS_BATCHCREATETABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class BatchCreateTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT BatchCreateTableRowsRequest : public HoneycodeRequest {

public:
    BatchCreateTableRowsRequest(const BatchCreateTableRowsRequest &other);
    BatchCreateTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
