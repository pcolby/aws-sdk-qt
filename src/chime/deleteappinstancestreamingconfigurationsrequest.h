// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H
#define QTAWS_DELETEAPPINSTANCESTREAMINGCONFIGURATIONSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceStreamingConfigurationsRequestPrivate;

class QTAWSCHIME_EXPORT DeleteAppInstanceStreamingConfigurationsRequest : public ChimeRequest {

public:
    DeleteAppInstanceStreamingConfigurationsRequest(const DeleteAppInstanceStreamingConfigurationsRequest &other);
    DeleteAppInstanceStreamingConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceStreamingConfigurationsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
