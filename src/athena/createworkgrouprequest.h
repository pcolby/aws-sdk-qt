// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKGROUPREQUEST_H
#define QTAWS_CREATEWORKGROUPREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class CreateWorkGroupRequestPrivate;

class QTAWSATHENA_EXPORT CreateWorkGroupRequest : public AthenaRequest {

public:
    CreateWorkGroupRequest(const CreateWorkGroupRequest &other);
    CreateWorkGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
