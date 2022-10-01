// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H
#define QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetTrackingOptionsRequestPrivate;

class QTAWSSES_EXPORT DeleteConfigurationSetTrackingOptionsRequest : public SesRequest {

public:
    DeleteConfigurationSetTrackingOptionsRequest(const DeleteConfigurationSetTrackingOptionsRequest &other);
    DeleteConfigurationSetTrackingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
