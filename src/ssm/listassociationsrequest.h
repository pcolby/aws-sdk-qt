// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATIONSREQUEST_H
#define QTAWS_LISTASSOCIATIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListAssociationsRequestPrivate;

class QTAWSSSM_EXPORT ListAssociationsRequest : public SsmRequest {

public:
    ListAssociationsRequest(const ListAssociationsRequest &other);
    ListAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssociationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
