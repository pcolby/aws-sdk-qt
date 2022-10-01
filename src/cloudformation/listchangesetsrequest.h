// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCHANGESETSREQUEST_H
#define QTAWS_LISTCHANGESETSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListChangeSetsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListChangeSetsRequest : public CloudFormationRequest {

public:
    ListChangeSetsRequest(const ListChangeSetsRequest &other);
    ListChangeSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListChangeSetsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
