// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETESNAPSHOTREQUEST_H
#define QTAWS_COMPLETESNAPSHOTREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class CompleteSnapshotRequestPrivate;

class QTAWSEBS_EXPORT CompleteSnapshotRequest : public EbsRequest {

public:
    CompleteSnapshotRequest(const CompleteSnapshotRequest &other);
    CompleteSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteSnapshotRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
