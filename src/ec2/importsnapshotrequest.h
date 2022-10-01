// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSNAPSHOTREQUEST_H
#define QTAWS_IMPORTSNAPSHOTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ImportSnapshotRequestPrivate;

class QTAWSEC2_EXPORT ImportSnapshotRequest : public Ec2Request {

public:
    ImportSnapshotRequest(const ImportSnapshotRequest &other);
    ImportSnapshotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportSnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
