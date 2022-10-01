// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTRESULTREQUEST_H
#define QTAWS_GETSTATEMENTRESULTREQUEST_H

#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class GetStatementResultRequestPrivate;

class QTAWSREDSHIFTDATA_EXPORT GetStatementResultRequest : public RedshiftDataRequest {

public:
    GetStatementResultRequest(const GetStatementResultRequest &other);
    GetStatementResultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStatementResultRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
