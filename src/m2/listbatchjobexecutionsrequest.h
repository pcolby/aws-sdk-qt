// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBEXECUTIONSREQUEST_H
#define QTAWS_LISTBATCHJOBEXECUTIONSREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class ListBatchJobExecutionsRequestPrivate;

class QTAWSM2_EXPORT ListBatchJobExecutionsRequest : public M2Request {

public:
    ListBatchJobExecutionsRequest(const ListBatchJobExecutionsRequest &other);
    ListBatchJobExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchJobExecutionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
