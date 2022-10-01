// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class RebootDBInstanceRequestPrivate;

class QTAWSDOCDB_EXPORT RebootDBInstanceRequest : public DocDbRequest {

public:
    RebootDBInstanceRequest(const RebootDBInstanceRequest &other);
    RebootDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBInstanceRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
