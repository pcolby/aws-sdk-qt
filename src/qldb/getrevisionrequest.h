// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVISIONREQUEST_H
#define QTAWS_GETREVISIONREQUEST_H

#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class GetRevisionRequestPrivate;

class QTAWSQLDB_EXPORT GetRevisionRequest : public QldbRequest {

public:
    GetRevisionRequest(const GetRevisionRequest &other);
    GetRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRevisionRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
