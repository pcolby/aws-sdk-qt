// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONFIGREQUEST_H
#define QTAWS_UPDATEDOMAINCONFIGREQUEST_H

#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class UpdateDomainConfigRequestPrivate;

class QTAWSOPENSEARCH_EXPORT UpdateDomainConfigRequest : public OpenSearchRequest {

public:
    UpdateDomainConfigRequest(const UpdateDomainConfigRequest &other);
    UpdateDomainConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainConfigRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
