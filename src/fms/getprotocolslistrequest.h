// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTOCOLSLISTREQUEST_H
#define QTAWS_GETPROTOCOLSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetProtocolsListRequestPrivate;

class QTAWSFMS_EXPORT GetProtocolsListRequest : public FmsRequest {

public:
    GetProtocolsListRequest(const GetProtocolsListRequest &other);
    GetProtocolsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
