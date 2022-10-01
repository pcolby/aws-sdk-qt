// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEALIASESREQUEST_H
#define QTAWS_LISTROLEALIASESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListRoleAliasesRequestPrivate;

class QTAWSIOT_EXPORT ListRoleAliasesRequest : public IoTRequest {

public:
    ListRoleAliasesRequest(const ListRoleAliasesRequest &other);
    ListRoleAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoleAliasesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
