// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEREQUEST_H
#define QTAWS_DELETEDBINSTANCEREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBInstanceRequestPrivate;

class QTAWSNEPTUNE_EXPORT DeleteDBInstanceRequest : public NeptuneRequest {

public:
    DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other);
    DeleteDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
