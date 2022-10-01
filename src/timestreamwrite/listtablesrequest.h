// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLESREQUEST_H
#define QTAWS_LISTTABLESREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class ListTablesRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT ListTablesRequest : public TimestreamWriteRequest {

public:
    ListTablesRequest(const ListTablesRequest &other);
    ListTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTablesRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
