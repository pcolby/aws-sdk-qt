// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTSNAPSHOTRESTORESREQUEST_H
#define QTAWS_DISABLEFASTSNAPSHOTRESTORESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisableFastSnapshotRestoresRequestPrivate;

class QTAWSEC2_EXPORT DisableFastSnapshotRestoresRequest : public Ec2Request {

public:
    DisableFastSnapshotRestoresRequest(const DisableFastSnapshotRestoresRequest &other);
    DisableFastSnapshotRestoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableFastSnapshotRestoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
