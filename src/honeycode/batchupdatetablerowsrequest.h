// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATETABLEROWSREQUEST_H
#define QTAWS_BATCHUPDATETABLEROWSREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpdateTableRowsRequestPrivate;

class QTAWSHONEYCODE_EXPORT BatchUpdateTableRowsRequest : public HoneycodeRequest {

public:
    BatchUpdateTableRowsRequest(const BatchUpdateTableRowsRequest &other);
    BatchUpdateTableRowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateTableRowsRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
