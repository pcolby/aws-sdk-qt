// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMENTSREQUEST_H
#define QTAWS_LISTSTATEMENTSREQUEST_H

#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class ListStatementsRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT ListStatementsRequest : public RedshiftDataRequest {

public:
    ListStatementsRequest(const ListStatementsRequest &other);
    ListStatementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStatementsRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
