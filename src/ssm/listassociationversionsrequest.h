// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONVERSIONSREQUEST_H
#define QTAWS_LISTASSOCIATIONVERSIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListAssociationVersionsRequestPrivate;

class QTAWSSSM_EXPORT ListAssociationVersionsRequest : public SsmRequest {

public:
    ListAssociationVersionsRequest(const ListAssociationVersionsRequest &other);
    ListAssociationVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationVersionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
