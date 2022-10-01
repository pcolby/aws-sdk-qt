// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSNAPSHOTBLOCKSREQUEST_H
#define QTAWS_LISTSNAPSHOTBLOCKSREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class ListSnapshotBlocksRequestPrivate;

class QTAWSEBS_EXPORT ListSnapshotBlocksRequest : public EbsRequest {

public:
    ListSnapshotBlocksRequest(const ListSnapshotBlocksRequest &other);
    ListSnapshotBlocksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSnapshotBlocksRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
