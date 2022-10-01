// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKERBLOCKSREQUEST_H
#define QTAWS_LISTWORKERBLOCKSREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class ListWorkerBlocksRequestPrivate;

class QTAWSMTURK_EXPORT ListWorkerBlocksRequest : public MTurkRequest {

public:
    ListWorkerBlocksRequest(const ListWorkerBlocksRequest &other);
    ListWorkerBlocksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkerBlocksRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
