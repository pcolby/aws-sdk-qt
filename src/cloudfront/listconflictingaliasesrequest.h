// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFLICTINGALIASESREQUEST_H
#define QTAWS_LISTCONFLICTINGALIASESREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListConflictingAliasesRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListConflictingAliasesRequest : public CloudFrontRequest {

public:
    ListConflictingAliasesRequest(const ListConflictingAliasesRequest &other);
    ListConflictingAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConflictingAliasesRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
