// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYGLOBALCLUSTERREQUEST_H
#define QTAWS_MODIFYGLOBALCLUSTERREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyGlobalClusterRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyGlobalClusterRequest : public NeptuneRequest {

public:
    ModifyGlobalClusterRequest(const ModifyGlobalClusterRequest &other);
    ModifyGlobalClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyGlobalClusterRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
