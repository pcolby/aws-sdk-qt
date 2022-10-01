// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTREQUEST_H
#define QTAWS_GETSNAPSHOTREQUEST_H

#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetSnapshotRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetSnapshotRequest : public RedshiftServerlessRequest {

public:
    GetSnapshotRequest(const GetSnapshotRequest &other);
    GetSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnapshotRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
