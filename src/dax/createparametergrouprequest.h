// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARAMETERGROUPREQUEST_H
#define QTAWS_CREATEPARAMETERGROUPREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class CreateParameterGroupRequestPrivate;

class QTAWSDAX_EXPORT CreateParameterGroupRequest : public DaxRequest {

public:
    CreateParameterGroupRequest(const CreateParameterGroupRequest &other);
    CreateParameterGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParameterGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
