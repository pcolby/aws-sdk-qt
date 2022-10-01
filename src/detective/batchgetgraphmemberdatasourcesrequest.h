// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETGRAPHMEMBERDATASOURCESREQUEST_H
#define QTAWS_BATCHGETGRAPHMEMBERDATASOURCESREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class BatchGetGraphMemberDatasourcesRequestPrivate;

class QTAWSDETECTIVE_EXPORT BatchGetGraphMemberDatasourcesRequest : public DetectiveRequest {

public:
    BatchGetGraphMemberDatasourcesRequest(const BatchGetGraphMemberDatasourcesRequest &other);
    BatchGetGraphMemberDatasourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetGraphMemberDatasourcesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
