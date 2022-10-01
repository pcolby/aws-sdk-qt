// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTANDARDSCONTROLREQUEST_H
#define QTAWS_UPDATESTANDARDSCONTROLREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateStandardsControlRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateStandardsControlRequest : public SecurityHubRequest {

public:
    UpdateStandardsControlRequest(const UpdateStandardsControlRequest &other);
    UpdateStandardsControlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStandardsControlRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
