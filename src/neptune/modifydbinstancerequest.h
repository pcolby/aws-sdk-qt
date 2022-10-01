// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCEREQUEST_H
#define QTAWS_MODIFYDBINSTANCEREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBInstanceRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBInstanceRequest : public NeptuneRequest {

public:
    ModifyDBInstanceRequest(const ModifyDBInstanceRequest &other);
    ModifyDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBInstanceRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
