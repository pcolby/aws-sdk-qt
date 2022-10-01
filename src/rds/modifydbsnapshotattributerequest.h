// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTATTRIBUTEREQUEST_H
#define QTAWS_MODIFYDBSNAPSHOTATTRIBUTEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotAttributeRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBSnapshotAttributeRequest : public RdsRequest {

public:
    ModifyDBSnapshotAttributeRequest(const ModifyDBSnapshotAttributeRequest &other);
    ModifyDBSnapshotAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSnapshotAttributeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
