// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSNAPSHOTBLOCKREQUEST_H
#define QTAWS_PUTSNAPSHOTBLOCKREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class PutSnapshotBlockRequestPrivate;

class QTAWSEBS_EXPORT PutSnapshotBlockRequest : public EbsRequest {

public:
    PutSnapshotBlockRequest(const PutSnapshotBlockRequest &other);
    PutSnapshotBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSnapshotBlockRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
