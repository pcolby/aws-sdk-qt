// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWCONTENTREQUEST_H
#define QTAWS_UPDATECONTACTFLOWCONTENTREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowContentRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateContactFlowContentRequest : public ConnectRequest {

public:
    UpdateContactFlowContentRequest(const UpdateContactFlowContentRequest &other);
    UpdateContactFlowContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactFlowContentRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
