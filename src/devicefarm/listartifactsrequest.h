// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTARTIFACTSREQUEST_H
#define QTAWS_LISTARTIFACTSREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListArtifactsRequestPrivate;

class QTAWSDEVICEFARM_EXPORT ListArtifactsRequest : public DeviceFarmRequest {

public:
    ListArtifactsRequest(const ListArtifactsRequest &other);
    ListArtifactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListArtifactsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
