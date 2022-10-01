// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSCONFIGURATIONREQUEST_H
#define QTAWS_GETEVENTSCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetEventsConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT GetEventsConfigurationRequest : public ChimeRequest {

public:
    GetEventsConfigurationRequest(const GetEventsConfigurationRequest &other);
    GetEventsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventsConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
