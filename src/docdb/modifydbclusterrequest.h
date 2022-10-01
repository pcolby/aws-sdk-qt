// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERREQUEST_H
#define QTAWS_MODIFYDBCLUSTERREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBClusterRequestPrivate;

class QTAWSDOCDB_EXPORT ModifyDBClusterRequest : public DocDbRequest {

public:
    ModifyDBClusterRequest(const ModifyDBClusterRequest &other);
    ModifyDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
