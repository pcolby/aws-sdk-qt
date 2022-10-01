// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetEventDestinationRequestPrivate;

class QTAWSSES_EXPORT DeleteConfigurationSetEventDestinationRequest : public SesRequest {

public:
    DeleteConfigurationSetEventDestinationRequest(const DeleteConfigurationSetEventDestinationRequest &other);
    DeleteConfigurationSetEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetEventDestinationRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
