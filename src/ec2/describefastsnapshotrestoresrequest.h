// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTSNAPSHOTRESTORESREQUEST_H
#define QTAWS_DESCRIBEFASTSNAPSHOTRESTORESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastSnapshotRestoresRequestPrivate;

class QTAWSEC2_EXPORT DescribeFastSnapshotRestoresRequest : public Ec2Request {

public:
    DescribeFastSnapshotRestoresRequest(const DescribeFastSnapshotRestoresRequest &other);
    DescribeFastSnapshotRestoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFastSnapshotRestoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
