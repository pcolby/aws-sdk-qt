// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKGROUPREQUEST_H
#define QTAWS_GETWORKGROUPREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetWorkGroupRequestPrivate;

class QTAWSATHENA_EXPORT GetWorkGroupRequest : public AthenaRequest {

public:
    GetWorkGroupRequest(const GetWorkGroupRequest &other);
    GetWorkGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
