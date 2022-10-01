// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTBLOCKREQUEST_H
#define QTAWS_GETSNAPSHOTBLOCKREQUEST_H

#include "ebsrequest.h"

namespace QtAws {
namespace Ebs {

class GetSnapshotBlockRequestPrivate;

class QTAWSEBS_EXPORT GetSnapshotBlockRequest : public EbsRequest {

public:
    GetSnapshotBlockRequest(const GetSnapshotBlockRequest &other);
    GetSnapshotBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotBlockRequest)

};

} // namespace Ebs
} // namespace QtAws

#endif
