// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPARAMETERGROUPREQUEST_H
#define QTAWS_MODIFYDBPARAMETERGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBParameterGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBParameterGroupRequest : public NeptuneRequest {

public:
    ModifyDBParameterGroupRequest(const ModifyDBParameterGroupRequest &other);
    ModifyDBParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
