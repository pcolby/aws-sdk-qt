// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERELATEDITEMSREQUEST_H
#define QTAWS_UPDATERELATEDITEMSREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateRelatedItemsRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateRelatedItemsRequest : public SsmIncidentsRequest {

public:
    UpdateRelatedItemsRequest(const UpdateRelatedItemsRequest &other);
    UpdateRelatedItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRelatedItemsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
