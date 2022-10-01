// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H
#define QTAWS_GETAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetAppInstanceStreamingConfigurationsRequestPrivate;

class QTAWSCHIME_EXPORT GetAppInstanceStreamingConfigurationsRequest : public ChimeRequest {

public:
    GetAppInstanceStreamingConfigurationsRequest(const GetAppInstanceStreamingConfigurationsRequest &other);
    GetAppInstanceStreamingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
