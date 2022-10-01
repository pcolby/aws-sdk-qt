// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROTOCOLSLISTREQUEST_H
#define QTAWS_PUTPROTOCOLSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class PutProtocolsListRequestPrivate;

class QTAWSFMS_EXPORT PutProtocolsListRequest : public FmsRequest {

public:
    PutProtocolsListRequest(const PutProtocolsListRequest &other);
    PutProtocolsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
