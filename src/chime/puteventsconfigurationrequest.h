// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSCONFIGURATIONREQUEST_H
#define QTAWS_PUTEVENTSCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutEventsConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT PutEventsConfigurationRequest : public ChimeRequest {

public:
    PutEventsConfigurationRequest(const PutEventsConfigurationRequest &other);
    PutEventsConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
