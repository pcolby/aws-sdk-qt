// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARAMETERGROUPREQUEST_H
#define QTAWS_UPDATEPARAMETERGROUPREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class UpdateParameterGroupRequestPrivate;

class QTAWSDAX_EXPORT UpdateParameterGroupRequest : public DaxRequest {

public:
    UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other);
    UpdateParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateParameterGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
