// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESETREQUEST_H
#define QTAWS_UPDATERULESETREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRulesetRequestPrivate;

class QTAWSDATABREW_EXPORT UpdateRulesetRequest : public DataBrewRequest {

public:
    UpdateRulesetRequest(const UpdateRulesetRequest &other);
    UpdateRulesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
