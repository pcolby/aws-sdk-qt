// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKGROUPREQUEST_H
#define QTAWS_DELETEWORKGROUPREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class DeleteWorkGroupRequestPrivate;

class QTAWSATHENA_EXPORT DeleteWorkGroupRequest : public AthenaRequest {

public:
    DeleteWorkGroupRequest(const DeleteWorkGroupRequest &other);
    DeleteWorkGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
