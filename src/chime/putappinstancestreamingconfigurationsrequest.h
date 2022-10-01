// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H
#define QTAWS_PUTAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutAppInstanceStreamingConfigurationsRequestPrivate;

class QTAWSCHIME_EXPORT PutAppInstanceStreamingConfigurationsRequest : public ChimeRequest {

public:
    PutAppInstanceStreamingConfigurationsRequest(const PutAppInstanceStreamingConfigurationsRequest &other);
    PutAppInstanceStreamingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
