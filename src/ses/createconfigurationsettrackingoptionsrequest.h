// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H
#define QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetTrackingOptionsRequestPrivate;

class QTAWSSES_EXPORT CreateConfigurationSetTrackingOptionsRequest : public SesRequest {

public:
    CreateConfigurationSetTrackingOptionsRequest(const CreateConfigurationSetTrackingOptionsRequest &other);
    CreateConfigurationSetTrackingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
