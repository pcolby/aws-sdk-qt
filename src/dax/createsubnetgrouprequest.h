// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPREQUEST_H
#define QTAWS_CREATESUBNETGROUPREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class CreateSubnetGroupRequestPrivate;

class QTAWSDAX_EXPORT CreateSubnetGroupRequest : public DaxRequest {

public:
    CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other);
    CreateSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetGroupRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
