// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_H
#define QTAWS_DESCRIBEFOLDERCONTENTSREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeFolderContentsRequestPrivate;

class QTAWSWORKDOCS_EXPORT DescribeFolderContentsRequest : public WorkDocsRequest {

public:
    DescribeFolderContentsRequest(const DescribeFolderContentsRequest &other);
    DescribeFolderContentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderContentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
