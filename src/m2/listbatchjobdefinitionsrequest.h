// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBATCHJOBDEFINITIONSREQUEST_H
#define QTAWS_LISTBATCHJOBDEFINITIONSREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class ListBatchJobDefinitionsRequestPrivate;

class QTAWSM2_EXPORT ListBatchJobDefinitionsRequest : public M2Request {

public:
    ListBatchJobDefinitionsRequest(const ListBatchJobDefinitionsRequest &other);
    ListBatchJobDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBatchJobDefinitionsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
