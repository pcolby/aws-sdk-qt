// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESETSREQUEST_H
#define QTAWS_LISTRULESETSREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRulesetsRequestPrivate;

class QTAWSDATABREW_EXPORT ListRulesetsRequest : public DataBrewRequest {

public:
    ListRulesetsRequest(const ListRulesetsRequest &other);
    ListRulesetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRulesetsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
