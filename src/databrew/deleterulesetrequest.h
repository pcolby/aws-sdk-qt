// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULESETREQUEST_H
#define QTAWS_DELETERULESETREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRulesetRequestPrivate;

class QTAWSDATABREW_EXPORT DeleteRulesetRequest : public DataBrewRequest {

public:
    DeleteRulesetRequest(const DeleteRulesetRequest &other);
    DeleteRulesetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRulesetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
