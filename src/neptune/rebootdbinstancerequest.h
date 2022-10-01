// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCEREQUEST_H
#define QTAWS_REBOOTDBINSTANCEREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class RebootDBInstanceRequestPrivate;

class QTAWSNEPTUNE_EXPORT RebootDBInstanceRequest : public NeptuneRequest {

public:
    RebootDBInstanceRequest(const RebootDBInstanceRequest &other);
    RebootDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
