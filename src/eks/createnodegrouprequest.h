// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEGROUPREQUEST_H
#define QTAWS_CREATENODEGROUPREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class CreateNodegroupRequestPrivate;

class QTAWSEKS_EXPORT CreateNodegroupRequest : public EksRequest {

public:
    CreateNodegroupRequest(const CreateNodegroupRequest &other);
    CreateNodegroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
