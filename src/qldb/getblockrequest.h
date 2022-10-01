// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKREQUEST_H
#define QTAWS_GETBLOCKREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class GetBlockRequestPrivate;

class QTAWSQLDB_EXPORT GetBlockRequest : public QldbRequest {

public:
    GetBlockRequest(const GetBlockRequest &other);
    GetBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlockRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
