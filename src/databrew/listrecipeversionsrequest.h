// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPEVERSIONSREQUEST_H
#define QTAWS_LISTRECIPEVERSIONSREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRecipeVersionsRequestPrivate;

class QTAWSDATABREW_EXPORT ListRecipeVersionsRequest : public DataBrewRequest {

public:
    ListRecipeVersionsRequest(const ListRecipeVersionsRequest &other);
    ListRecipeVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecipeVersionsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
