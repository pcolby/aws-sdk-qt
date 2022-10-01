// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIGESTREQUEST_H
#define QTAWS_GETDIGESTREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class GetDigestRequestPrivate;

class QTAWSQLDB_EXPORT GetDigestRequest : public QldbRequest {

public:
    GetDigestRequest(const GetDigestRequest &other);
    GetDigestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDigestRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
