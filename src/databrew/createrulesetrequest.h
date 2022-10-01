// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULESETREQUEST_H
#define QTAWS_CREATERULESETREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRulesetRequestPrivate;

class QTAWSDATABREW_EXPORT CreateRulesetRequest : public DataBrewRequest {

public:
    CreateRulesetRequest(const CreateRulesetRequest &other);
    CreateRulesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
